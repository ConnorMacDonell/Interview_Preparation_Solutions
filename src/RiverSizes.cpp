/*
 * RiverSizes.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: Connor
 */

#include "RiverSizes.h"

std::vector<int> riverSizes(const std::vector<std::vector<int> >& matrix) {
	std::vector<int> results;
	std::vector<std::vector<bool> > beenVisited;
	setToFalse(beenVisited, matrix.size(), matrix[0].size());

	for(int i = 0; i < matrix.size(); ++i){
		for(int j = 0; j < matrix[0].size(); ++j){
			if(matrix[i][j] == 0 && beenVisited[i][j] == false){
				results.push_back(bfsVisitRiver(matrix, i, j, beenVisited));
			}
		}
	}
	return results;
}

int bfsVisitRiver(const std::vector<std::vector<int> >& matrix, int row, int col,
		std::vector<std::vector<bool> >& beenVisited){
	std::queue<std::pair<int, int> > bfsQueue;

	bfsQueue.push(std::make_pair(row, col));
	int size = 1;

	while(!bfsQueue.empty()){
		int currRow = bfsQueue.front().first;
		int currCol = bfsQueue.front().second;
		bfsQueue.pop();
		std::vector<std::pair<int, int> > neighbors = getNeighborsNoDiag(currRow, currCol);
		for(int i = 0; i < neighbors.size(); ++i){
			int neighbRow = neighbors[i].first;
			int neighbCol = neighbors[i].second;

			if(!oob(matrix, neighbRow, neighbCol) &&
					matrix[neighbRow][neighbCol] == 0 &&
					beenVisited[neighbRow][neighbCol] == 0){
				beenVisited[neighbRow][neighbCol] = 1;
				++size;
				bfsQueue.push(neighbors[i]);
			}
		}
	}
	return size;
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




