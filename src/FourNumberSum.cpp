/*
 * FourNumberSum.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: Connor
 */

#include "FourNumberSum.h"


/*std::vector<std::vector<int> > fourNumberSum(std::vector<int> array, int targetSum) {
  std::unordered_map<int, std::pair<int, int> > pairsMap =
		buildPairMap(array);
	std::vector<std::vector<int> > result;

	auto it = pairsMap.begin();
	for(; it != pairsMap.end(); ++it){
		if(pairsMap.find(targetSum - *it) != pairsMap.end()){
			std::pair<int, int> curr = it -> second;
			std::pair<int, int> twin = pairsMap[targetSum - *it];
			if(curr.first != twin.first && curr.first != twin.second){
				std::vector<int> temp;
				temp.push_back(curr.first);
				temp.push_back(curr.second);
				temp.push_back(twin.first);
				temp.push_back(twin.second);
				result.push_back(temp);
			}
		}
	}
	return result;
}



std::unordered_map<int, std::pair<int, int> > buildPairMap(const std::vector<int>& array){
	std::unordered_map<int, std::pair<int, int> > pairsMap;
	for(int i = 0; i < array.size() - 1; ++i){
		for(int j = i + 1; j < array.size(); ++j){
			int sum = array[i] + array[j];
			std::pair<int, int> pair = std::make_pair(array[i], array[j]);
			pairsMap[sum] = pair;
		}
	}
	return pairsMap;
}*/


