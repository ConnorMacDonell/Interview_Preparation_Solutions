/*
 * RiverSizes.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: Connor
 */

#include "RiverSizes.h"

std::vector<int> riverSizes(std::vector<std::vector<int> > matrix) {
	std::vector<int> results;
	std::vector<std::vector<bool> > beenVisited;
	setToFalse(beenVisited, matrix.size(), matrix[0].size());

	for(int row = 0; row < matrix.size(); ++row){
		for(int col = 0; col < matrix[0].size(); ++col){
			if(!oob(matrix, row, col) && !beenVisited[row][col] &&
				 matrix[row][col] == 1){
				int riverSize = visitRiver(matrix, beenVisited, row, col);
				results.push_back(riverSize);
			}
		}
	}
	return results;
}

int visitRiver(const std::vector<std::vector<int > >& matrix,
							 std::vector<std::vector<bool> >& beenVisited,
							 int row, int col){
	int riverSize = 0;
	std::queue<std::pair<int, int> > bfsQ;
	bfsQ.push(std::make_pair(row, col));

	while(!bfsQ.empty()){
		int currRow = bfsQ.front().first;
		int currCol = bfsQ.front().second;
		bfsQ.pop();
		beenVisited[currRow][currCol] = true;
		++riverSize;
		std::vector<std::pair<int, int> > neighbors = getNeighborsNoDiag(currRow, currCol);
		for(int i = 0; i < 4; ++i){
			int first = neighbors[i].first;
			int second = neighbors[i].second;
			if(!oob(matrix, first, second) && !beenVisited[first][second] &&
				 matrix[first][second] == 1){
					 bfsQ.push(neighbors[i]);
			}
		}
	}
	return riverSize;
}


void setToFalse(std::vector<std::vector<bool> >& beenVisited, int numRows,
							 int numCols){
	std::vector<bool> temp;
	for(int i = 0; i < numCols; ++i){
		temp.push_back(false);
	}
	for(int i = 0; i < numRows; ++i){
		beenVisited.push_back(temp);
	}
}

bool oob(const std::vector<std::vector<int> >& matrix, int row, int col){
	if(row < 0 || col < 0 || row > matrix.size() || col > matrix[0].size()){
		return true;
	}
	return false;
}

std::vector<std::pair<int, int> > getNeighborsNoDiag(int row, int col){
	std::vector<std::pair<int, int> > neighbors;
	neighbors.push_back(std::make_pair(row - 1, col));
	neighbors.push_back(std::make_pair(row + 1, col));
	neighbors.push_back(std::make_pair(row, col - 1));
	neighbors.push_back(std::make_pair(row, col + 1));
	return neighbors;
}




