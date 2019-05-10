/*
 * SudokuSolver.h
 *
 *  Created on: May 10, 2019
 *      Author: Connor
 */

/*
 * Given a sudoku puzzle provide a possible solution if one exists
 */

#include <vector>
#include <iostream>

#ifndef SUDOKUSOLVER_H_
#define SUDOKUSOLVER_H_

void sudokuSolver(std::vector<std::vector<int> >& board);

bool sudokuSolverHelper(std::vector<std::vector<int> >& board, int row, int col);

bool isSafe(const std::vector<std::vector<int> >& board, int row, int col, int toPlace);

bool safeRow(const std::vector<std::vector<int> >& board, int row, int col, int toPlace);

bool safeCol(const std::vector<std::vector<int> >& board, int row, int col, int toPlace);

bool safeBox(const std::vector<std::vector<int> >& board, int row, int col, int toPlace);

bool oobSud(int row, int col);



#endif /* SUDOKUSOLVER_H_ */
