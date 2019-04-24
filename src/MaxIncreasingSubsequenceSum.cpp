/*
 * MaxIncreasingSubsequenceSum.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: Connor
 */

#include "MaxIncreasingSubsequenceSum.h"

std::vector<std::vector<int> > maxSumIncreasingSubsequence(std::vector<int> array){
	std::vector<int> sums;
	std::vector<std::vector<int> > realResult;

	for(int i = 0; i < array.size(); ++i){
		sums.push_back(array[i]);
	}
	std::vector<int> indicies(array.size(), -1);
	indicies[0] = -1;

	for(int curr = 1; curr < array.size(); ++curr){
		for(int prev = 0; prev < curr; ++prev){
			if(array[prev] < array[curr] && sums[prev] + array[curr] > sums[curr]){
				sums[curr] =  sums[prev] + array[curr];
				indicies[curr] = prev;
			}
		}
	}
	int max = INT_MIN;
	int maxIndex = 0;
	for(int i = 0; i < array.size(); ++i){
		if(sums[i] > max){
			max = sums[i];
			maxIndex = i;
		}
	}
	std::vector<int> result;
	if(indicies[maxIndex] == -1){
		std::vector<int> temp;
		temp.push_back(max);
		realResult.push_back(temp);
		temp[0] = array[maxIndex];
		realResult.push_back(temp);
		return realResult;
	}
	int curr = maxIndex;
	while(curr != -1){
		result.push_back(array[curr]);
		curr = indicies[curr];
	}

	std::reverse(result.begin(), result.end());
	std::vector<int> temp;
	temp.push_back(max);
	realResult.push_back(temp);
	realResult.push_back(result);
	return realResult;
}


