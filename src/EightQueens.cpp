/*
 * EightQueens.cpp
 *
 *  Created on: Apr 9, 2019
 *      Author: Connor
 */

#include "EightQueens.h"
#include "RotateMatrix.h"

void eightQueens(){
	std::vector<std::vector<int> > board;
	setToOne(board, 8, 8);
	eightQueensHelp(board, 0, 0);
}

void eightQueensHelp(std::vector<std::vector<int> > board, int col, int numQueens){
	if(numQueens == 8){
		printMatrix(board);
		std::cout << std::endl;
		return;
	}
	if(col >= 8){
		return;
	}

	for(int i = 0; i < 8; ++i){
		if(safeQueen(board, i, col)){
			board[i][col] = 8;
			eightQueensHelp(board, col + 1, numQueens + 1);
			board[i][col] = 1;
		}
	}
}

bool safeQueen(std::vector<std::vector<int> > board, int row, int col){

	//Check row
	for(int i = 0; i < 8; ++i){
		if(i != row && board[i][col] != 1){
			return false;
		}
	}

	//Check col
	for(int i = 0; i < 8; ++i){
		if(i != col && board[row][i] != 1){
			return false;
		}
	}

	//Check upper right diagonal
	int tempRow = row - 1;
	int tempCol = col + 1;
	while(tempRow >= 0 && tempCol < 8){
		if(board[tempRow][tempCol] != 1){
			return false;
		}
		--tempRow;
		++tempCol;
	}

	//Check upper left diagonal
	tempRow = row - 1;
	tempCol = col - 1;
	while(tempRow >= 0 && tempCol >= 0){
		if(board[tempRow][tempCol] != 1){
			return false;
		}
		--tempRow;
		--tempCol;
	}

	//Check lower left diagonal
	tempRow = row + 1;
	tempCol = col - 1;
	while(tempRow < 8 && tempCol >= 0){
		if(board[tempRow][tempCol] != 1){
			return false;
		}
		++tempRow;
		--tempCol;
	}

	//Check lower right diagonal
	tempRow = row + 1;
	tempCol = col + 1;
	while(tempRow < 8 && tempCol < 8){
		if(board[tempRow][tempCol] != 1){
			return false;
		}
		++tempRow;
		++tempCol;
	}
	return true;
}

void setToOne(std::vector<std::vector<int> >& matrix, int rowSize, int colSize){
	std::vector<int> temp;
	for(int i = 0; i < rowSize; ++i){
		temp.push_back(1);
	}
	for(int i = 0; i < colSize; ++i){
		matrix.push_back(temp);
	}
}


