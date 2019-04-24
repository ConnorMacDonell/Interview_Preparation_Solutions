/*
 * MergeIntervals.cpp
 *
 *  Created on: Apr 2, 2019
 *      Author: Connor
 */

#include "MergeIntervals.h"

std::vector<std::pair<int, int> > mergeIntervals(std::vector<std::pair<int, int> > input){
	if(input.empty()){
		throw std::invalid_argument ("Input is empty: MergeIntervals");
	}
	std::vector<std::pair<int, int> > result;
	int start = input[0].first;
	int end = input[0].second;
	int size = input.size();

	for(int i = 1; i < size; ++i){
		while(i < size && input[i].first <= end){
			if(input[i].second > end){
				end = input[i].second;
			}
			++i;
		}
		result.push_back(std::make_pair(start, end));
		if(i == size){
			return result;
		}
		start = input[i].first;
		end = input[i].second;
	}
	result.push_back(std::make_pair(start, end));
	return result;
}


