/*
 * StabIntervals.cpp
 *
 *  Created on: Apr 12, 2019
 *      Author: Connor
 */

#include "StabIntervals.h"

std::vector<int> stabIntervals(std::vector<std::pair<int, int> > input){
    if(input.empty()){
        throw std::invalid_argument("Input is empty: stabIntervals");
    }

    int lowestEnd = input[0].second;
    int size = input.size();
    std::vector<int> result;

    for(int i = 1; i < size; ++i){
    	while(input[i].first <= lowestEnd && i < size){
    		++i;
    	}
    	result.push_back(lowestEnd);
    	if(i >= size){
        return result;
    	}
    lowestEnd = input[i].second;
    }
    return result;
}



