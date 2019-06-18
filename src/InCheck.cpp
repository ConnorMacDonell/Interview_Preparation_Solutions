/*
 * InCheck.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: Connor
 */

#include "InCheck.h"

bool isInCheck(const std::vector<std::vector<char> >& board){
	for(int i = 0; i < board.size(); ++i){
		for(int j = 0; j < board[0].size(); ++j){
			if(board[i][j] == 'p'){
				if(pawnCheck(i, j, board)){
					return true;
				}
			}
			else if(board[i][j] == 'r'){
				if(rookCheck(i, j, board)){
					return true;
				}
			}
			else if(board[i][j] == 'b'){
				if(bishopCheck(i, j, board)){
					return true;
				}
			}
			else if(board[i][j] == 'n'){
				if(knightCheck(i, j, board)){
					return true;
				}
			}
			else if(board[i][j] == 'q'){
				if(bishopCheck(i, j, board) || rookCheck(i, j, board)){
					return true;
				}
			}
		}
	}
	return false;
}

bool pawnCheck(const int& row, const int& col, const std::vector<std::vector<char> >& board){
	if(row == 0){
		return false;
	}
	else if(col == 0){
		return board[row - 1][col + 1] == 'k';
	}
	else if(col == 7){
		return board[row - 1][col - 1] == 'k';
	}
	else if(board[row -1][col - 1] == 'k' || board[row - 1][col + 1] == 'k'){
		return true;
	}
	else{
		return false;
	}
}

bool bishopCheck(const int& row, const int& col, const std::vector<std::vector<char> >& board){
	int dupRow = row - 1;
	int dupCol = col - 1;

	while(dupRow >= 0 && dupCol >= 0){
		if(board[dupRow][dupCol] == 'k'){
			return true;
		}
		else if(board[dupRow][dupCol] != '-'){
			break;
		}
		--dupRow;
		--dupCol;
	}

	dupRow = row + 1;
	dupCol = col - 1;

	while(dupRow <= 7 && dupCol >= 0){
		if(board[dupRow][dupCol] == 'k'){
			return true;
		}
		else if(board[dupRow][dupCol] != '-'){
			break;
		}
		++dupRow;
		--dupCol;
	}

	dupRow = row - 1;
	dupCol = col + 1;

	while(dupRow >= 0 && dupCol <= 7){
		if(board[dupRow][dupCol] == 'k'){
			return true;
		}
		else if(board[dupRow][dupCol] != '-'){
			break;
		}
		--dupRow;
		++dupCol;
	}

	dupRow = row + 1;
	dupCol = col + 1;

	while(dupRow <= 7 && dupCol <= 7){
		if(board[dupRow][dupCol] == 'k'){
			return true;
		}
		else if(board[dupRow][dupCol] != '-'){
			break;
		}
		++dupRow;
		++dupCol;
	}
	return false;
}

bool rookCheck(const int& row, const int& col, const std::vector<std::vector<char> >& board){
	int dupRow = row + 1;
	int dupCol = col;

	while(dupRow <= 7){
		if(board[dupRow][dupCol] == 'k'){
			return true;
		}
		else if(board[dupRow][dupCol] != '-'){
			break;
		}
		++dupRow;
	}

	dupRow = row - 1;

	while(dupRow >= 0){
		if(board[dupRow][dupCol] == 'k'){
			return true;
		}
		else if(board[dupRow][dupCol] != '-'){
			break;
		}
		--dupRow;
	}

	dupRow = row;
	--dupCol;

	while(dupCol >= 0){
		if(board[dupRow][dupCol] == 'k'){
			return true;
		}
		else if(board[dupRow][dupCol] != '-'){
			break;
		}
		--dupCol;
	}

	dupCol = col + 1;

	while(dupCol <= 7){
		if(board[dupRow][dupCol] == 'k'){
			return true;
		}
		else if(board[dupRow][dupCol] != '-'){
			break;
		}
		++dupCol;
	}
	return false;
}

bool knightCheck(const int& row, const int& col, const std::vector<std::vector<char> >& board){
	int destRow = row + 2;
	int destCol= col - 1;

	if(destRow <= 7 && destCol >= 0){
		if(board[destRow][destCol] == 'k'){
			return true;
		}
	}

	destRow = row + 2;
	destCol = col + 1;

	if(destRow <= 7 && destCol <= 7){
		if(board[destRow][destCol] == 'k'){
			return true;
		}
	}

	destRow = row + 1;
	destCol = col + 2;

	if(destRow <= 7 && destCol <= 7){
		if(board[destRow][destCol] == 'k'){
			return true;
		}
	}

	destRow = row - 1;
	destCol = col + 2;

	if(destRow >= 0 && destCol <= 7){
		if(board[destRow][destCol] == 'k'){
			return true;
		}
	}

	destRow = row - 1;
	destCol = col - 2;

	if(destRow >= 0 && destCol >= 0){
		if(board[destRow][destCol] == 'k'){
			return true;
		}
	}

	destRow = row + 1;
	destCol = col - 2;

	if(destRow <= 7 && destCol >= 0){
		if(board[destRow][destCol] == 'k'){
			return true;
		}
	}

	destRow = row - 2;
	destCol = col - 1;

	if(destRow >= 0 && destCol >= 0){
		if(board[destRow][destCol] == 'k'){
			return true;
		}
	}

	destRow = row - 2;
	destCol = col + 1;

	if(destRow >= 0 && destCol <= 7){
		if(board[destRow][destCol] == 'k'){
			return true;
		}
	}
	return false;
}
