/*
 * SmallestDifference.cpp
 *
 *  Created on: Apr 17, 2019
 *      Author: Connor
 */

#include "SmallestDifference.h"

std::vector<int> smallestDifference(std::vector<int> arrayOne, std::vector<int> arrayTwo){

	std::sort(arrayOne.begin(), arrayOne.end());
	std::sort(arrayTwo.begin(), arrayTwo.end());
	int diff = abs(arrayOne[0] - arrayTwo[0]);
	std::vector<int> result;
	result.push_back(arrayOne[0]);
	result.push_back(arrayTwo[0]);
	int i = 0;
	int j = 0;

	while(i < arrayOne.size() && j < arrayTwo.size()){
		if(abs(arrayOne[i] - arrayTwo[j]) < diff){
			diff = abs(arrayOne[i] - arrayTwo[j]);
			result[0] = arrayOne[i];
			result[1] = arrayTwo[j];
		}
		if(arrayOne[i] == arrayTwo[j]){
			return result;
		}
		else if(arrayOne[i] < arrayTwo[j]){
			++i;
		}
		else{
			++j;
		}
	}
	return result;
}


