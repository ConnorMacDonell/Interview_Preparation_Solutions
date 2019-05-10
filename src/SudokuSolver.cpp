/*
 * SudokuSolver.cpp
 *
 *  Created on: May 10, 2019
 *      Author: Connor
 */

#include "SudokuSolver.h"
#include "RotateMatrix.h"

void sudokuSolver(std::vector<std::vector<int> >& board){
	if(board.empty()){
		return;
	}

	if(sudokuSolverHelper(board, 0, 0)){
		printMatrix(board);
		return;
	}
	std::cout << "No valid solution." << std::endl;
}

bool sudokuSolverHelper(std::vector<std::vector<int> >& board, int row, int col){
	if(row > 8 || col > 8){
		return false;
	}
	if(board[row][col] != 0){
		if(row == 8 && col == 8){
			return true;
		}
		else if(col == 8){
			return sudokuSolverHelper(board, row + 1, 0);
		}
		else{
			return sudokuSolverHelper(board, row, col + 1);
		}
	}
	for(int i = 1; i < 10; ++i){
		if(isSafe(board, row, col, i)){
			board[row][col] = i;
			if(row == 8 && col == 8){
				return true;
			}
			else if(col == 8){
				if(sudokuSolverHelper(board, row + 1, 0)){
					return true;
				}
			}
			else{
				if(sudokuSolverHelper(board, row, col + 1)){
					return true;
				}
			}
		}
	}
	board[row][col] = 0;
	return false;
}

bool isSafe(const std::vector<std::vector<int> >& board, int row, int col, int toPlace){
	if(safeRow(board, row, col, toPlace) && safeCol(board, row, col, toPlace) &&
			safeBox(board, row, col, toPlace)){
		return true;
	}
	return false;
}

bool safeRow(const std::vector<std::vector<int> >& board, int row, int col, int toPlace){
	for(int i = 0; i < 9; ++i){
		if(board[row][i] == toPlace){
			return false;
		}
	}
	return true;
}

bool safeCol(const std::vector<std::vector<int> >& board, int row, int col, int toPlace){
	for(int i = 0; i < 9; ++i){
		if(board[i][col] == toPlace){
			return false;
		}
	}
	return true;
}

bool safeBox(const std::vector<std::vector<int> >& board, int row, int col, int toPlace){
	if(row < 3 && col < 3){//top left box
		for(int i = 0; i < 3; ++i){
			for(int j = 0; j < 3; ++j){
				if(board[i][j] == toPlace){
					return false;
				}
			}
		}
	}
	if(row < 3 && col >= 3 && col < 6){//top mid box
		for(int i = 0; i < 3; ++i){
			for(int j = 3; j < 6; ++j){
				if(board[i][j] == toPlace){
					return false;
				}
			}
		}
	}
	if(row < 3 && col >= 6 && col < 9){//top right box
		for(int i = 0; i < 3; ++i){
			for(int j = 6; j < 9; ++j){
				if(board[i][j] == toPlace){
					return false;
				}
			}
		}
	}
	if(row >= 3 && row < 6 && col < 3){//mid left box
		for(int i = 3; i < 6; ++i){
			for(int j = 0; j < 3; ++j){
				if(board[i][j] == toPlace){
					return false;
				}
			}
		}
	}
	if(row >= 3 && row < 6 && col >= 3 && col < 6){//mid mid box
		for(int i = 3; i < 6; ++i){
			for(int j = 3; j < 6; ++j){
				if(board[i][j] == toPlace){
					return false;
				}
			}
		}
	}
	if(row >= 3 && row < 6 && col >= 6 && col < 9){//mid right box
		for(int i = 3; i < 6; ++i){
			for(int j = 6; j < 9; ++j){
				if(board[i][j] == toPlace){
					return false;
				}
			}
		}
	}
	if(row >= 6 && col < 3){//bottom left box
		for(int i = 6; i < 9; ++i){
			for(int j = 0; j < 3; ++j){
				if(board[i][j] == toPlace){
					return false;
				}
			}
		}
	}
	if(row >= 6 && col >= 3 && col < 6){//bottom mid box
		for(int i = 6; i < 9; ++i){
			for(int j = 3; j < 6; ++j){
				if(board[i][j] == toPlace){
					return false;
				}
			}
		}
	}
	if(row >= 6 && col >= 6 && col < 9){//bottom right box
		for(int i = 6; i < 9; ++i){
			for(int j = 6; j < 9; ++j){
				if(board[i][j] == toPlace){
					return false;
				}
			}
		}
	}
	return true;
}


