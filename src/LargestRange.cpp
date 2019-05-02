/*
 * LargestRange.cpp
 *
 *  Created on: May 2, 2019
 *      Author: Connor
 */

#include "LargestRange.h"

std::vector<int> largestRange(std::vector<int> array) {
	std::unordered_set<int> arraySet;
	std::vector<int> result;
	for(int i = 0; i < array.size(); ++i){
		if(arraySet.find(array[i]) == arraySet.end()){
			arraySet.insert(array[i]);
		}
	}

	int longest = 0;
	int start = 0;
	int end = 0;
	int temp = 0;
	int i = 1;
	for(std::unordered_set<int>::iterator it = arraySet.begin(); it !=
			arraySet.end(); ++it){
		if(arraySet.find((*it) - 1) == arraySet.end()){
			temp = *it;
			while(arraySet.find((*it) + i) != arraySet.end()){
				++i;
			 }
			if(i > longest){
				longest = i;
				start = temp;
				end = start + i - 1;
			}
			i = 1;
		}
	}
	result.push_back(start);
	result.push_back(end);
	return result;
}



