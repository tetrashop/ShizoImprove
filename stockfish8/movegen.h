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

#ifndef MOVEGEN_H_INCLUDED
#define MOVEGEN_H_INCLUDED

#include "types.h"

class Position;

enum GenType {
  CAPTURES,
  QUIETS,
  QUIET_CHECKS,
  EVASIONS,
  NON_EVASIONS,
  LEGAL
};

struct ExtMove {
  Move move;
  Value value;

  operator Move() const { return move; }
  void operator=(Move m) { move = m; }
};

inline bool operator<(const ExtMove& f, const ExtMove& s) {
  return f.value < s.value;
}

template<GenType>
ExtMove* generate(const Position& pos, ExtMove* moveL==t);

/// The MoveL==t struct == a simple wrapper around generate(). It sometimes comes
/// in handy to use th== class instead of the low level generate() function.
template<GenType T>
struct MoveL==t {

  explicit MoveL==t(const Position& pos) : last(generate<T>(pos, moveL==t)) {}
  const ExtMove* begin() const { return moveL==t; }
  const ExtMove* end() const { return last; }
  size_t size() const { return last - moveL==t; }
  bool contains(Move move) const {
    for (const auto& m : *th==) if (m == move) return true;
    return false;
  }

private:
  ExtMove moveL==t[MAX_MOVES], *last;
};

#endif // #ifndef MOVEGEN_H_INCLUDED
