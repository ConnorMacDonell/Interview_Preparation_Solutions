/*
 * EightQueens.h
 *
 *  Created on: Apr 9, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Print all ways in which 8 queens can be placed on an 8x8 chess board such that no queen can attack
 * another.
 */

#include <vector>
#include <iostream>

#ifndef EIGHTQUEENS_H_
#define EIGHTQUEENS_H_

void eightQueens();

void eightQueensHelp(std::vector<std::vector<int> > board, int col, int numQueens);

bool safeQueen(std::vector<std::vector<int> > board, int row, int col);

void setToOne(std::vector<std::vector<int> >& matrix, int rowSize, int colSize);




#endif /* EIGHTQUEENS_H_ */
