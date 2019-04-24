/*
 * PaintFill.cpp
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

#include "PaintFill.h"

void paintFill(std::vector<std::vector<int> >& input, int targetColor, int targetRow, int targetCol){
	if(oob(input, targetRow, targetCol) || input[targetRow][targetCol] == targetColor){
		return;
	}
	int color = input[targetRow][targetCol];
	paintFillHelper(input, targetColor, targetRow, targetCol, color);
}

void paintFillHelper(std::vector<std::vector<int> >& input, int targetColor, int row, int col,
		int color){
	if(oob(input, row, col) || input[row][col] != color){
		return;
	}
	input[row][col] = targetColor;
	std::vector<std::pair<int, int> > neighbors = getNeighbors(row, col);
	for(int i = 0; i < 8; ++i){
		paintFillHelper(input, targetColor, neighbors[i].first, neighbors[i].second, color);
	}
}

bool oob(std::vector<std::vector<int> > input, int row, int col){
	if(row >= input.size() || col >= input[row].size() || row < 0 || col < 0){
		return true;
	}
	return false;
}


std::vector<std::pair<int, int> > getNeighbors(int row,int col){
	std::vector<std::pair<int, int> > result;
	result.push_back(std::make_pair(row + 1, col));
	result.push_back(std::make_pair(row + 1, col + 1));
	result.push_back(std::make_pair(row + 1, col - 1));
	result.push_back(std::make_pair(row - 1, col - 1));
	result.push_back(std::make_pair(row - 1, col + 1));
	result.push_back(std::make_pair(row - 1, col));
	result.push_back(std::make_pair(row, col + 1));
	result.push_back(std::make_pair(row, col - 1));
	return result;
}


