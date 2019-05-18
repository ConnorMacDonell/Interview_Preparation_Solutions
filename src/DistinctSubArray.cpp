/*
 * DistinctSubArray.cpp
 *
 *  Created on: May 18, 2019
 *      Author: Connor
 */

#include "DistinctSubArray.h"

int longestDistinct(const std::vector<int>& input){
	if(input.empty()){
		return 0;
	}

	std::unordered_set<int> currElems;
	int i = 0;
	int j = 1;
	int currLen = 1;
	int maxLen = 1;
	currElems.insert(input[0]);

	while(j < input.size()){
		if(currElems.find(input[j]) != currElems.end()){
			while(input[i] != input[j] && i < j){
				--currLen;
				currElems.erase(input[i]);
				++i;
			}
			++i;
		}
		else{
			currElems.insert(input[j]);
			++currLen;
		}
		if(currLen > maxLen){
			maxLen = currLen;
		}
		++j;
	}
	return maxLen;
}


