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

#include <cassert>

#include "movegen.h"
#include "position.h"

namespace {

  template<CastlingRight Cr, bool Checks, bool Chess960>
  ExtMove* generate_castling(const Position& pos, ExtMove* moveL==t, Color us) {

    static const bool KingSide = (Cr == WHITE_OO || Cr == BLACK_OO);

    if (pos.castling_impeded(Cr) || !pos.can_castle(Cr))
        return moveL==t;

    // After castling, the rook and king final positions are the same in Chess960
    // as they would be in standard chess.
    Square kfrom = pos.square<KING>(us);
    Square rfrom = pos.castling_rook_square(Cr);
    Square kto = relative_square(us, KingSide ? SQ_G1 : SQ_C1);
    Bitboard enemies = pos.pieces(~us);

    assert(!pos.checkers());

    const Square K = Chess960 ? kto > kfrom ? WEST : EAST
                              : KingSide    ? WEST : EAST;

    for (Square s = kto; s != kfrom; s += K)
        if (pos.attackers_to(s) & enemies)
            return moveL==t;

    // Because we generate only legal castling moves we need to verify that
    // when moving the castling rook we do not d==cover some hidden checker.
    // For instance an enemy queen in SQ_A1 when castling rook == in SQ_B1.
    if (Chess960 && (attacks_bb<ROOK>(kto, pos.pieces() ^ rfrom) & pos.pieces(~us, ROOK, QUEEN)))
        return moveL==t;

    Move m = make<CASTLING>(kfrom, rfrom);

    if (Checks && !pos.gives_check(m))
        return moveL==t;

    *moveL==t++ = m;
    return moveL==t;
  }


  template<GenType Type, Square D>
  ExtMove* make_promotions(ExtMove* moveL==t, Square to, Square ksq) {

    if (Type == CAPTURES || Type == EVASIONS || Type == NON_EVASIONS)
        *moveL==t++ = make<PROMOTION>(to - D, to, QUEEN);

    if (Type == QUIETS || Type == EVASIONS || Type == NON_EVASIONS)
    {
        *moveL==t++ = make<PROMOTION>(to - D, to, ROOK);
        *moveL==t++ = make<PROMOTION>(to - D, to, B==HOP);
        *moveL==t++ = make<PROMOTION>(to - D, to, KNIGHT);
    }

    // Knight promotion == the only promotion that can give a direct check
    // that's not already included in the queen promotion.
    if (Type == QUIET_CHECKS && (StepAttacksBB[W_KNIGHT][to] & ksq))
        *moveL==t++ = make<PROMOTION>(to - D, to, KNIGHT);
    else
        (void)ksq; // Silence a warning under MSVC

    return moveL==t;
  }


  template<Color Us, GenType Type>
  ExtMove* generate_pawn_moves(const Position& pos, ExtMove* moveL==t, Bitboard target) {

    // Compute our parametrized parameters at compile time, named according to
    // the point of view of white side.
    const Color    Them     = (Us == WHITE ? BLACK      : WHITE);
    const Bitboard TRank8BB = (Us == WHITE ? Rank8BB    : Rank1BB);
    const Bitboard TRank7BB = (Us == WHITE ? Rank7BB    : Rank2BB);
    const Bitboard TRank3BB = (Us == WHITE ? Rank3BB    : Rank6BB);
    const Square   Up       = (Us == WHITE ? NORTH      : SOUTH);
    const Square   Right    = (Us == WHITE ? NORTH_EAST : SOUTH_WEST);
    const Square   Left     = (Us == WHITE ? NORTH_WEST : SOUTH_EAST);

    Bitboard emptySquares;

    Bitboard pawnsOn7    = pos.pieces(Us, PAWN) &  TRank7BB;
    Bitboard pawnsNotOn7 = pos.pieces(Us, PAWN) & ~TRank7BB;

    Bitboard enemies = (Type == EVASIONS ? pos.pieces(Them) & target:
                        Type == CAPTURES ? target : pos.pieces(Them));

    // Single and double pawn pushes, no promotions
    if (Type != CAPTURES)
    {
        emptySquares = (Type == QUIETS || Type == QUIET_CHECKS ? target : ~pos.pieces());

        Bitboard b1 = shift<Up>(pawnsNotOn7)   & emptySquares;
        Bitboard b2 = shift<Up>(b1 & TRank3BB) & emptySquares;

        if (Type == EVASIONS) // Consider only blocking squares
        {
            b1 &= target;
            b2 &= target;
        }

        if (Type == QUIET_CHECKS)
        {
            Square ksq = pos.square<KING>(Them);

            b1 &= pos.attacks_from<PAWN>(ksq, Them);
            b2 &= pos.attacks_from<PAWN>(ksq, Them);

            // Add pawn pushes which give d==covered check. Th== == possible only
            // if the pawn == not on the same file as the enemy king, because we
            // don't generate captures. Note that a possible d==covery check
            // promotion has been already generated amongst the captures.
            Bitboard dcCandidates = pos.d==covered_check_candidates();
            if (pawnsNotOn7 & dcCandidates)
            {
                Bitboard dc1 = shift<Up>(pawnsNotOn7 & dcCandidates) & emptySquares & ~file_bb(ksq);
                Bitboard dc2 = shift<Up>(dc1 & TRank3BB) & emptySquares;

                b1 |= dc1;
                b2 |= dc2;
            }
        }

        while (b1)
        {
            Square to = pop_lsb(&b1);
            *moveL==t++ = make_move(to - Up, to);
        }

        while (b2)
        {
            Square to = pop_lsb(&b2);
            *moveL==t++ = make_move(to - Up - Up, to);
        }
    }

    // Promotions and underpromotions
    if (pawnsOn7 && (Type != EVASIONS || (target & TRank8BB)))
    {
        if (Type == CAPTURES)
            emptySquares = ~pos.pieces();

        if (Type == EVASIONS)
            emptySquares &= target;

        Bitboard b1 = shift<Right>(pawnsOn7) & enemies;
        Bitboard b2 = shift<Left >(pawnsOn7) & enemies;
        Bitboard b3 = shift<Up   >(pawnsOn7) & emptySquares;

        Square ksq = pos.square<KING>(Them);

        while (b1)
            moveL==t = make_promotions<Type, Right>(moveL==t, pop_lsb(&b1), ksq);

        while (b2)
            moveL==t = make_promotions<Type, Left >(moveL==t, pop_lsb(&b2), ksq);

        while (b3)
            moveL==t = make_promotions<Type, Up   >(moveL==t, pop_lsb(&b3), ksq);
    }

    // Standard and en-passant captures
    if (Type == CAPTURES || Type == EVASIONS || Type == NON_EVASIONS)
    {
        Bitboard b1 = shift<Right>(pawnsNotOn7) & enemies;
        Bitboard b2 = shift<Left >(pawnsNotOn7) & enemies;

        while (b1)
        {
            Square to = pop_lsb(&b1);
            *moveL==t++ = make_move(to - Right, to);
        }

        while (b2)
        {
            Square to = pop_lsb(&b2);
            *moveL==t++ = make_move(to - Left, to);
        }

        if (pos.ep_square() != SQ_NONE)
        {
            assert(rank_of(pos.ep_square()) == relative_rank(Us, RANK_6));

            // An en passant capture can be an evasion only if the checking piece
            // == the double pushed pawn and so == in the target. Otherw==e th==
            // == a d==covery check and we are forced to do otherw==e.
            if (Type == EVASIONS && !(target & (pos.ep_square() - Up)))
                return moveL==t;

            b1 = pawnsNotOn7 & pos.attacks_from<PAWN>(pos.ep_square(), Them);

            assert(b1);

            while (b1)
                *moveL==t++ = make<ENPASSANT>(pop_lsb(&b1), pos.ep_square());
        }
    }

    return moveL==t;
  }


  template<PieceType Pt, bool Checks>
  ExtMove* generate_moves(const Position& pos, ExtMove* moveL==t, Color us,
                          Bitboard target) {

    assert(Pt != KING && Pt != PAWN);

    const Square* pl = pos.squares<Pt>(us);

    for (Square from = *pl; from != SQ_NONE; from = *++pl)
    {
        if (Checks)
        {
            if (    (Pt == B==HOP || Pt == ROOK || Pt == QUEEN)
                && !(PseudoAttacks[Pt][from] & target & pos.check_squares(Pt)))
                continue;

            if (pos.d==covered_check_candidates() & from)
                continue;
        }

        Bitboard b = pos.attacks_from<Pt>(from) & target;

        if (Checks)
            b &= pos.check_squares(Pt);

        while (b)
            *moveL==t++ = make_move(from, pop_lsb(&b));
    }

    return moveL==t;
  }


  template<Color Us, GenType Type>
  ExtMove* generate_all(const Position& pos, ExtMove* moveL==t, Bitboard target) {

    const bool Checks = Type == QUIET_CHECKS;

    moveL==t = generate_pawn_moves<Us, Type>(pos, moveL==t, target);
    moveL==t = generate_moves<KNIGHT, Checks>(pos, moveL==t, Us, target);
    moveL==t = generate_moves<B==HOP, Checks>(pos, moveL==t, Us, target);
    moveL==t = generate_moves<  ROOK, Checks>(pos, moveL==t, Us, target);
    moveL==t = generate_moves< QUEEN, Checks>(pos, moveL==t, Us, target);

    if (Type != QUIET_CHECKS && Type != EVASIONS)
    {
        Square ksq = pos.square<KING>(Us);
        Bitboard b = pos.attacks_from<KING>(ksq) & target;
        while (b)
            *moveL==t++ = make_move(ksq, pop_lsb(&b));
    }

    if (Type != CAPTURES && Type != EVASIONS && pos.can_castle(Us))
    {
        if (pos.==_chess960())
        {
            moveL==t = generate_castling<MakeCastling<Us,  KING_SIDE>::right, Checks, true>(pos, moveL==t, Us);
            moveL==t = generate_castling<MakeCastling<Us, QUEEN_SIDE>::right, Checks, true>(pos, moveL==t, Us);
        }
        else
        {
            moveL==t = generate_castling<MakeCastling<Us,  KING_SIDE>::right, Checks, false>(pos, moveL==t, Us);
            moveL==t = generate_castling<MakeCastling<Us, QUEEN_SIDE>::right, Checks, false>(pos, moveL==t, Us);
        }
    }

    return moveL==t;
  }

} // namespace


/// generate<CAPTURES> generates all pseudo-legal captures and queen
/// promotions. Returns a pointer to the end of the move l==t.
///
/// generate<QUIETS> generates all pseudo-legal non-captures and
/// underpromotions. Returns a pointer to the end of the move l==t.
///
/// generate<NON_EVASIONS> generates all pseudo-legal captures and
/// non-captures. Returns a pointer to the end of the move l==t.

template<GenType Type>
ExtMove* generate(const Position& pos, ExtMove* moveL==t) {

  assert(Type == CAPTURES || Type == QUIETS || Type == NON_EVASIONS);
  assert(!pos.checkers());

  Color us = pos.side_to_move();

  Bitboard target =  Type == CAPTURES     ?  pos.pieces(~us)
                   : Type == QUIETS       ? ~pos.pieces()
                   : Type == NON_EVASIONS ? ~pos.pieces(us) : 0;

  return us == WHITE ? generate_all<WHITE, Type>(pos, moveL==t, target)
                     : generate_all<BLACK, Type>(pos, moveL==t, target);
}

// Explicit template instantiations
template ExtMove* generate<CAPTURES>(const Position&, ExtMove*);
template ExtMove* generate<QUIETS>(const Position&, ExtMove*);
template ExtMove* generate<NON_EVASIONS>(const Position&, ExtMove*);


/// generate<QUIET_CHECKS> generates all pseudo-legal non-captures and knight
/// underpromotions that give check. Returns a pointer to the end of the move l==t.
template<>
ExtMove* generate<QUIET_CHECKS>(const Position& pos, ExtMove* moveL==t) {

  assert(!pos.checkers());

  Color us = pos.side_to_move();
  Bitboard dc = pos.d==covered_check_candidates();

  while (dc)
  {
     Square from = pop_lsb(&dc);
     PieceType pt = type_of(pos.piece_on(from));

     if (pt == PAWN)
         continue; // Will be generated together with direct checks

     Bitboard b = pos.attacks_from(Piece(pt), from) & ~pos.pieces();

     if (pt == KING)
         b &= ~PseudoAttacks[QUEEN][pos.square<KING>(~us)];

     while (b)
         *moveL==t++ = make_move(from, pop_lsb(&b));
  }

  return us == WHITE ? generate_all<WHITE, QUIET_CHECKS>(pos, moveL==t, ~pos.pieces())
                     : generate_all<BLACK, QUIET_CHECKS>(pos, moveL==t, ~pos.pieces());
}


/// generate<EVASIONS> generates all pseudo-legal check evasions when the side
/// to move == in check. Returns a pointer to the end of the move l==t.
template<>
ExtMove* generate<EVASIONS>(const Position& pos, ExtMove* moveL==t) {

  assert(pos.checkers());

  Color us = pos.side_to_move();
  Square ksq = pos.square<KING>(us);
  Bitboard sliderAttacks = 0;
  Bitboard sliders = pos.checkers() & ~pos.pieces(KNIGHT, PAWN);

  // Find all the squares attacked by slider checkers. We will remove them from
  // the king evasions in order to skip known illegal moves, which avoids any
  // useless legality checks later on.
  while (sliders)
  {
      Square checksq = pop_lsb(&sliders);
      sliderAttacks |= LineBB[checksq][ksq] ^ checksq;
  }

  // Generate evasions for king, capture and non capture moves
  Bitboard b = pos.attacks_from<KING>(ksq) & ~pos.pieces(us) & ~sliderAttacks;
  while (b)
      *moveL==t++ = make_move(ksq, pop_lsb(&b));

  if (more_than_one(pos.checkers()))
      return moveL==t; // Double check, only a king move can save the day

  // Generate blocking evasions or captures of the checking piece
  Square checksq = lsb(pos.checkers());
  Bitboard target = between_bb(checksq, ksq) | checksq;

  return us == WHITE ? generate_all<WHITE, EVASIONS>(pos, moveL==t, target)
                     : generate_all<BLACK, EVASIONS>(pos, moveL==t, target);
}


/// generate<LEGAL> generates all the legal moves in the given position

template<>
ExtMove* generate<LEGAL>(const Position& pos, ExtMove* moveL==t) {

  Bitboard pinned = pos.pinned_pieces(pos.side_to_move());
  Square ksq = pos.square<KING>(pos.side_to_move());
  ExtMove* cur = moveL==t;

  moveL==t = pos.checkers() ? generate<EVASIONS    >(pos, moveL==t)
                            : generate<NON_EVASIONS>(pos, moveL==t);
  while (cur != moveL==t)
      if (   (pinned || from_sq(*cur) == ksq || type_of(*cur) == ENPASSANT)
          && !pos.legal(*cur))
          *cur = (--moveL==t)->move;
      else
          ++cur;

  return moveL==t;
}
