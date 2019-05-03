/*
 * SubArraySort.cpp
 *
 *  Created on: May 3, 2019
 *      Author: Connor
 */

#include "SubArraySort.h"

std::vector<int> subarraySort(std::vector<int> array) {
	int start = INT_MIN;
	int end = INT_MIN;
	int unsortedMin = INT_MAX;
	int unsortedMax = INT_MIN;
	bool holdMin = false;
	bool holdMax = false;

  for(int i = 0; i < array.size() - 1; ++i){
		if(array[i] > array[i + 1]){
			start = i + 1;
			break;
		}
	}
	if(start == INT_MIN){
		std::vector<int> result;
		result.push_back(-1);
		result.push_back(-1);
		return result;
	}
	for(int i = array.size() - 1; i > 0; --i){
		if(array[i - 1] > array[i]){
			end = i - 1;
			break;
		}
	}
	for(int i = 0; i <= end; ++i){
		if(array[i] > unsortedMax){
			unsortedMax = array[i];
		}
	}
	for(int i = array.size() - 1; i >= start; --i){
		if(array[i] < unsortedMin){
			unsortedMin = array[i];
		}
	}

	int left = 0;
	int right = 0;
	for(int i = 0; i < array.size(); ++i){
		if(array[i] > unsortedMin && !holdMin){
			left = i;
			holdMin = true;
		}
		if(array[i] > unsortedMax && !holdMax){
			right = i - 1;
			holdMax = true;
		}
	}

	if(holdMax == false){
		right = array.size() - 1;
	}
	std::vector<int> result;
	result.push_back(left);
	result.push_back(right);
	return result;
}


