/*
 * RecursiveMultiply.cpp
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

#include "RecursiveMultiply.h"


int recursiveMultiply(int first, int second){
	if(first == 0 || second == 0){
		return 0;
	}
	int small = first < second ? first : second;
	int big = first < second ? second : first;
	return rMHelper(small, big);
}

int rMHelper(int small, int big){
	if(small == 1){
		return big;
	}
	int s = small >> 1;
	int half = rMHelper(s, big);
	if(small % 2 == 0){
		return half + half;
	}
	else{
		return half + half + big;
	}
}
