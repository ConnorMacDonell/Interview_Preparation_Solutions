/*
 * MinimumPartitionDifference.cpp
 *
 *  Created on: Mar 29, 2019
 *      Author: Connor
 */

#include "MinimumPartitionDifference.h"

int minPartDiff(std::vector<int> input){
	if(input.empty()){
		throw std::invalid_argument ("Input is empty");
	}
	int size = input.size();
	int sum1 = 0;
	int sum2 = 0;
	std::sort(input.begin(), input.end());

	for(int i = size - 1; i >= 0; --i){
		if(sum1 <= sum2){
			sum1 += input[i];
		}
		else{
			sum2 += input[i];
		}
	}
	int result = sum1 - sum2;
	return std::abs(result);
}


