/*
 * BuildLargest.cpp
 *
 *  Created on: May 10, 2019
 *      Author: Connor
 */


#include "BuildLargest.h"

std::vector<int> buildLargest(const std::vector<int>& input){
	std::vector<int> result;
	if(input.empty() || input.size() == 1){
		return result;
	}

	std::unordered_map<int, std::vector<std::pair<int, int> > > bucketMap;

	for(int i = 0; i < input.size(); ++i){
		int digits = 1;
		int temp = input[i];
		if(temp == 0){
			bucketMap[0].push_back(std::make_pair(0, 0));
		}
		else{
			while(temp >= 10){
				++digits;
				temp = temp/10;
			}
			bucketMap[temp].push_back(std::make_pair(digits, input[i]));
		}
	}

	for(int i = 9; i > 0; --i){
		if(bucketMap.find(i) != bucketMap.end()){
			std::vector<std::pair<int, int> > temp = bucketMap[i];
			std::sort(temp.begin(), temp.end(), pairFirstSecondSort);
			for(int j = 0; j < temp.size(); ++j){
				result.push_back(temp[j].second);
			}

		}
	}

	if(bucketMap.find(0) != bucketMap.end()){
		for(int j = 0; j < bucketMap[0].size(); ++j){
			result.push_back(0);
		}
	}
	return result;

}

bool pairFirstSecondSort(const std::pair<int, int>& pair1, const std::pair<int, int>& pair2){
	if(pair1.first < pair2.first){
		return true;
	}
	else if(pair1.first > pair2.first){
		return false;
	}
	else{
		return pair1.second > pair2.second;
	}
}

