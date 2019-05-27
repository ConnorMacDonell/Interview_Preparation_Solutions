/*
 * InsertInterval.cpp
 *
 *  Created on: May 27, 2019
 *      Author: Connor
 */

#include "InsertInterval.h"

std::vector<std::pair<int, int> > insertInterval(const std::vector<std::pair<int, int> >& intervals,
		std::pair<int, int> toInsert){
	if(intervals.empty()){
		return intervals;
	}

	int i = 0;
	while(toInsert.first >= intervals[i].first && i < intervals.size()){
		if(toInsert.first == intervals[i].first && toInsert.second == intervals[i].second){
			return intervals;
		}
		if(toInsert.first == intervals[i].first && toInsert.second <= intervals[i].second){
			break;
		}
		++i;
	}

	std::vector<std::pair<int, int> > resultFront;
	std::vector<std::pair<int, int> > resultBack;
	std::pair<int, int> merged = std::make_pair(0,0);
	bool onlyOnce = false;
	bool never = true;

	for(int j = 0; j < intervals.size(); ++j){
		if(j < i){
			if(intervals[j].second < toInsert.first){
				resultFront.push_back(intervals[j]);
			}
			else{
				merged.first = intervals[j].first;
				j = i - 1;
			}
		}
		if(j >= i){
			while(intervals[j].first <= toInsert.second){
				never = false;
				++j;
			}
			if(!onlyOnce){
				if(never){
					merged.second = toInsert.second;
				}
				else{
					merged.second = intervals[j - 1].second;
				}
				onlyOnce = true;
				never = false;
			}
			resultBack.push_back(intervals[j]);
		}
	}
	resultFront.push_back(merged);
	for(int i = 0; i < resultBack.size(); ++i){
		resultFront.push_back(resultBack[i]);
	}
	return resultFront;
}



