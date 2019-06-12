/*
 * ScrambledSequence.cpp
 *
 *  Created on: Jun 11, 2019
 *      Author: Connor
 */

#include "ScrambledSequence.h"

std::vector<int> scrambledSequence(const std::vector<char>& input){
	std::vector<int> result;
	if(input.empty()){
		return result;
	}
	if(input.size() == 1){
		result.push_back(0);
		return result;
	}
	int minusCount = countMinus(input);

	result.push_back(minusCount);
	int greatest = minusCount;
	int least = minusCount;

	for(int i = 1; i < input.size(); ++i){
		if(input[i] == '+'){
			++greatest;
			result.push_back(greatest);
		}
		else{
			--least;
			result.push_back(least);
		}
	}
	return result;
}

int countMinus(const std::vector<char>& input){
	int minusCount = 0;
	for(int i = 1; i < input.size(); ++i){
		if(input[i] == '-'){
			++minusCount;
		}
	}
	return minusCount;
}


