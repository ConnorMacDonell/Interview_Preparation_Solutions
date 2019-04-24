/*
 * TrpiletSum.cpp
 *
 *  Created on: Apr 17, 2019
 *      Author: Connor
 */

#include "TripletSum.h"

std::vector<std::vector<int> > tripletSum(std::vector<int> array, int targetSum) {

	std::vector<std::vector<int> > result;
	std::unordered_map<int, std::vector<int> > pairsMap;

	for(int i = 0; i < array.size() - 1; ++i){
		for(int j = i + 1; j < array.size(); ++j){
			int sum = array[i] + array[j];
			std::vector<int> pair;
			pair.push_back(array[i] <= array[j] ? array[i] : array[j]);
			pair.push_back(array[i] > array[j] ? array[i] : array[j]);
			pairsMap[sum] = pair;
		}
	}
	for(int i = 0; i < array.size(); ++i){
		if(pairsMap.find(targetSum - array[i]) != pairsMap.end()){
			std::vector<int> temp = pairsMap[targetSum - array[i]];
			temp.push_back(array[i]);
			int i = 2;
			while(i > 0 && temp[i] < temp[i - 1]){
				std::swap(temp[i], temp[i - 1]);
				--i;
			}
			result.push_back(temp);
			pairsMap.erase(targetSum - array[i]);
		}
	}
	return result;
}


