/*
 * RotateMatrix.cpp
 *
 *  Created on: Apr 16, 2019
 *      Author: Connor
 */

#include "RotateMatrix.h"

void rotate90CounterClockwise(std::vector<std::vector<int> >& matrix){
	if(matrix.empty() || matrix[0].empty()){
		return;
	}

	int sideLen = matrix.size();
	int len = sideLen - 1;

	for(int i = 0; i < sideLen/2; ++i){
		for(int j = i; j < len - i; ++j){

			int temp = matrix[i][j];

			matrix[i][j] = matrix[j][len - i];
			matrix[j][len - i] = matrix[len - i][len - j];
			matrix[len - i][len - j] = matrix[len - j][i];
			matrix[len - j][i] = temp;
		}
	}

}

void printMatrix(const std::vector<std::vector<int> >& matrix){
	if(matrix.empty() || matrix[0].empty()){
		return;
	}
	int height = matrix.size();

	for(int i = 0; i < height; ++i){
		for(int j = 0; j < matrix[i].size(); ++j){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
}


