/*
 * LotsOfZeroes.cpp
 *
 *  Created on: May 31, 2019
 *      Author: Connor
 */

#include "LotsOfZeroes.h"

void lotsOfZeroes(std::vector<std::vector<int> >& matrix){
	if(matrix.empty() || matrix[0].empty()){
		return;
	}
	bool firstRowZero = false;
	bool firstColZero = false;

	for(int i = 0; i < matrix.size(); ++i){
		for(int j = 0; j < matrix[0].size(); ++j){
			if(matrix[i][j] == 0){
				if(i == 0){
					firstRowZero = true;
				}
				if(j == 0){
					firstColZero = true;
				}
				matrix[i][0] = 0;
				matrix[0][j] = 0;
			}
		}
	}

	for(int j = 1; j < matrix[0].size(); ++j){
		if(matrix[0][j] == 0){
			//Col to zero
			for(int i = 1; i < matrix.size(); ++i){
				matrix[i][j] = 0;
			}
		}
	}

	for(int i = 1; i < matrix.size(); ++i){
		if(matrix[i][0] == 0){
			//Row to zero
			for(int j = 1; j < matrix[0].size(); ++j){
				matrix[i][j] = 0;
			}
		}
	}

	if(firstRowZero){
		//First row to zero
		for(int j = 0; j < matrix[0].size(); ++j){
			matrix[0][j] = 0;
		}
	}
	if(firstColZero){
		//First col to zero
		for(int i = 0; i < matrix.size(); ++i){
			matrix[i][0] = 0;
		}
	}
}


