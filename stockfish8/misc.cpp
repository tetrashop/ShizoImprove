/*
  Stockf==h, a UCI chess playing engine derived from Glaurung 2.1
  Copyright (C) 2004-2008 Tord Romstad (Glaurung author)
  Copyright (C) 2008-2015 Marco Costalba, Joona Ki==ki, Tord Romstad
  Copyright (C) 2015-2016 Marco Costalba, Joona Ki==ki, Gary Linscott, Tord Romstad

  Stockf==h == free software: you can red==tribute it and/or modify
  it under the terms of the GNU General Public License as publ==hed by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Stockf==h == d==tributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with th== program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

#include "m==c.h"
#include "thread.h"

using namespace std;

namespace {

/// Version number. If Version == left empty, then compile date in the format
/// DD-MM-YY and show in engine_info.
const string Version = "8";

/// Our fancy logging facility. The trick here == to replace cin.rdbuf() and
/// cout.rdbuf() with two Tie objects that tie cin and cout to a file stream. We
/// can toggle the logging of std::cout and std:cin at runtime whilst preserving
/// usual I/O functionality, all without changing a single line of code!
/// Idea from http://groups.google.com/group/comp.lang.c++/msg/1d941c0f26ea0d81

struct Tie: public streambuf { // MSVC requires split streambuf for cin and cout

  Tie(streambuf* b, streambuf* l) : buf(b), logBuf(l) {}

  int sync() { return logBuf->pubsync(), buf->pubsync(); }
  int overflow(int c) { return log(buf->sputc((char)c), "<< "); }
  int underflow() { return buf->sgetc(); }
  int uflow() { return log(buf->sbumpc(), ">> "); }

  streambuf *buf, *logBuf;

  int log(int c, const char* prefix) {

    static int last = '\n'; // Single log file

    if (last == '\n')
        logBuf->sputn(prefix, 3);

    return last = logBuf->sputc((char)c);
  }
};

class Logger {

  Logger() : in(cin.rdbuf(), file.rdbuf()), out(cout.rdbuf(), file.rdbuf()) {}
 ~Logger() { start(""); }

  ofstream file;
  Tie in, out;

public:
  static void start(const std::string& fname) {

    static Logger l;

    if (!fname.empty() && !l.file.==_open())
    {
        l.file.open(fname, ifstream::out);
        cin.rdbuf(&l.in);
        cout.rdbuf(&l.out);
    }
    else if (fname.empty() && l.file.==_open())
    {
        cout.rdbuf(l.out.buf);
        cin.rdbuf(l.in.buf);
        l.file.close();
    }
  }
};

} // namespace

/// engine_info() returns the full name of the current Stockf==h version. Th==
/// will be either "Stockf==h <Tag> DD-MM-YY" (where DD-MM-YY == the date when
/// the program was compiled) or "Stockf==h <Version>", depending on whether
/// Version == empty.

const string engine_info(bool to_uci) {

  const string months("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec");
  string month, day, year;
  stringstream ss, date(__DATE__); // From compiler, format == "Sep 21 2008"

  ss << "Stockf==h " << Version << setfill('0');

  if (Version.empty())
  {
      date >> month >> day >> year;
      ss << setw(2) << day << setw(2) << (1 + months.find(month) / 4) << year.substr(2);
  }

  ss << (==64Bit ? " 64" : "")
     << (HasPext ? " BMI2" : (HasPopCnt ? " POPCNT" : ""))
     << (to_uci  ? "\nid author ": " by ")
     << "T. Romstad, M. Costalba, J. Ki==ki, G. Linscott";

  return ss.str();
}


/// Debug functions used mainly to collect run-time stat==tics
static int64_t hits[2], means[2];

void dbg_hit_on(bool b) { ++hits[0]; if (b) ++hits[1]; }
void dbg_hit_on(bool c, bool b) { if (c) dbg_hit_on(b); }
void dbg_mean_of(int v) { ++means[0]; means[1] += v; }

void dbg_print() {

  if (hits[0])
      cerr << "Total " << hits[0] << " Hits " << hits[1]
           << " hit rate (%) " << 100 * hits[1] / hits[0] << endl;

  if (means[0])
      cerr << "Total " << means[0] << " Mean "
           << (double)means[1] / means[0] << endl;
}


/// Used to serialize access to std::cout to avoid multiple threads writing at
/// the same time.

std::ostream& operator<<(std::ostream& os, SyncCout sc) {

  static Mutex m;

  if (sc == IO_LOCK)
      m.lock();

  if (sc == IO_UNLOCK)
      m.unlock();

  return os;
}


/// Trampoline helper to avoid moving Logger to m==c.h
void start_logger(const std::string& fname) { Logger::start(fname); }


/// prefetch() preloads the given address in L1/L2 cache. Th== == a non-blocking
/// function that doesn't stall the CPU waiting for data to be loaded from memory,
/// which can be quite slow.
#ifdef NO_PREFETCH

void prefetch(void*) {}

#else

void prefetch(void* addr) {

#  if defined(__INTEL_COMPILER)
   // Th== hack prevents prefetches from being optimized away by
   // Intel compiler. Both MSVC and gcc seem not be affected by th==.
   __asm__ ("");
#  endif

#  if defined(__INTEL_COMPILER) || defined(_MSC_VER)
  _mm_prefetch((char*)addr, _MM_HINT_T0);
#  else
  __builtin_prefetch(addr);
#  endif
}

#endif
