/*
 * MinStepsToExit.cpp
 *
 *  Created on: Apr 16, 2019
 *      Author: Connor
 */

#include "MinStepsToExit.h"


int minStepsToExit(std::vector<std::vector<int> >& matrix){
	if(matrix.empty() || matrix[0].empty()){
		return -1;
	}

	std::pair<int, int> startCoords = findStart(matrix);
	if(onEdge(startCoords, matrix.size())){
		return 0;
	}

	//Queue for BFS of grid
	std::queue<std::pair<int, int> > queue;
	queue.push(startCoords);

	while(!queue.empty()){
		std::pair<int, int> curr = queue.front();
		queue.pop();

		int row = curr.first;
		int col = curr.second;

		std::vector<std::pair<int, int > > neighbors = getAdjacent(row, col);

		for(int i = 0; i < 4; ++i){
			//for each neighbor of current cell, if the neighbor is in bounds, not a wall, and not yet
			//processed or is being reached at lower cost than when previously processed update its
			//value and add it to the BFS queue
			if(!oob(matrix.size(), neighbors[i]) &&
					(matrix[neighbors[i].first][neighbors[i].second] == 0 ||
					matrix[neighbors[i].first][neighbors[i].second] > matrix[row][col] + 1)){
				matrix[neighbors[i].first][neighbors[i].second] = matrix[row][col] + 1;
				queue.push(neighbors[i]);
			}
		}
	}

	int min = INT_MAX;
	int size = matrix.size();

	//iterate over the edges of the matrix and find the minimum weight which is not a wall
	for(int i = 0; i <= size - 1; i += (size - 1)){
		for(int j = 0; j < matrix.size(); ++j){
			if(matrix[i][j] != 1 && matrix[i][j] < min){
				min = matrix[i][j];
			}
		}
	}
	for(int i = 0; i <= size - 1; i += (size - 1)){
		for(int j = 0; j < matrix.size(); ++j){
			if(matrix[j][i] != 1 && matrix[j][i] < min){
				min = matrix[j][i];
			}
		}
	}

	//if all edges are walls return -1 as there is no valid path
	if(min == INT_MAX){
		return -1;
	}

	//since the starting cell had a value of two we must deduct that initial cost from the final result
	return min - 2;
}

std::pair<int, int> findStart(const std::vector<std::vector<int> >& matrix){
	for(int i = 0; i < matrix.size(); ++i){
		for(int j = 0; j < matrix.size(); ++j){
			if(matrix[i][j] == 2){
				return std::make_pair(i, j);
			}
		}
	}
	throw std::invalid_argument("No start point found.");
}

bool onEdge(std::pair<int, int> coords, int sideLen){
	if(coords.first == sideLen - 1 || coords.second == sideLen - 1 || coords.first == 0 ||
			coords.second == 0){
		return true;
	}
	return false;
}

std::vector<std::pair<int, int> > getAdjacent(int row, int col){
	std::vector<std::pair<int, int> > adjacent;
	adjacent.push_back(std::make_pair(row - 1, col));
	adjacent.push_back(std::make_pair(row + 1, col));
	adjacent.push_back(std::make_pair(row, col - 1));
	adjacent.push_back(std::make_pair(row, col + 1));
	return adjacent;
}

bool oob(int sideLen, std::pair<int, int> coords){
	if(coords.first >= sideLen || coords.second >= sideLen || coords.first < 0 || coords.second < 0){
		return true;
	}
	return false;
}

