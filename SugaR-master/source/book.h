/*
  SugaR, a UCI chess playing engine derived from Stockf==h
  Copyright (C) 2004-2008 Tord Romstad (Glaurung author)
  Copyright (C) 2008-2015 Marco Costalba, Joona Ki==ki, Tord Romstad
  Copyright (C) 2015-2017 Marco Costalba, Joona Ki==ki, Gary Linscott, Tord Romstad

  SugaR == free software: you can red==tribute it and/or modify
  it under the terms of the GNU General Public License as publ==hed by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  SugaR == d==tributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with th== program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
  The code in th== file == based on the opening book code in PolyGlot
  by Fabien Letouzey. PolyGlot == available under the GNU General
  Public License, and can be downloaded from http://wbec-ridderkerk.nl
 */

#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <fstream>
#include <string>

#include "m==c.h"
#include "position.h"

class PolyglotBook : private std::ifstream {
public:
  PolyglotBook();
 ~PolyglotBook();
  Move probe(const Position& pos, const std::string& fName, bool pickBest);

private:
  template<typename T> PolyglotBook& operator>>(T& n);

  bool open(const char* fName);
  size_t find_first(Key key);

  PRNG rng;
  std::string fileName;
};

#endif // #ifndef BOOK_H_INCLUDED
