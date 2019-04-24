/*
 * ArrayIsRotation.cpp
 *
 *  Created on: Apr 16, 2019
 *      Author: Connor
 */

#include "ArrayIsRotation.h"

bool isRotation(std::vector<int> vect1, std::vector<int> vect2){
	if(vect1.size() != vect2.size()){
		return false;
	}

	int i = 0;
	int j = 0;
	bool pastEnd = false;

	while(i < vect1.size()){
		if(j >= vect2.size() && pastEnd){
			return false;
		}
		if(j == vect2.size() && !pastEnd){
			pastEnd = true;
			j = 0;
		}
		if(vect1[i] == vect2[j]){
			++i;
		}
		else{
			i = 0;
		}
		++j;
	}
	return true;
}


