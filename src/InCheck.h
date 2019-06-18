/*
 * InCheck.h
 *
 *  Created on: Jun 18, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a 2D matrix representing a chess board with a black King and various white pieces determine
 * whether the black king is in check. It can be assumed that the board given is a valid board i.e. no
 * two pieces will be on the same spot
 *
 * This was super annoying. Not really hard, but very annoying. Especially the knight. If you're reading
 * this I don't recommend doing this one for yourself. Save yourself some time.
 */

#include <vector>
#include <utility>

#ifndef INCHECK_H_
#define INCHECK_H_

bool isInCheck(const std::vector<std::vector<char> >& board);

bool pawnCheck(const int& row, const int& col, const std::vector<std::vector<char> >& board);

bool bishopCheck(const int& row, const int& col, const std::vector<std::vector<char> >& board);

bool rookCheck(const int& row, const int& col, const std::vector<std::vector<char> >& board);

bool knightCheck(const int& row, const int& col, const std::vector<std::vector<char> >& board);



#endif /* INCHECK_H_ */
