/*
 * JumpsToEnd.cpp
 *
 *  Created on: May 27, 2019
 *      Author: Connor
 */

#include "JumpsToEnd.h"

int minJumpsToEnd(const std::vector<int>& input){
	if(input.empty()){
		return -1;
	}
	if(input.size() == 1){
		return 0;
	}
	int range = 0;
	int currJumps = 0;
	int jumpTime = input[0];
	bool atEnd = false;

	//[2, 3, 1, 1, 4]
	for(int i = 0; i < input.size(); ++i){
		if(input[i] >= range){
			range = input[i];
		}
		if(jumpTime == 0){
			++currJumps;
			jumpTime = range;
			if(i == input.size() - 1){
				atEnd = true;
			}
		}
		if(range == 0 && i != input.size() - 1){
			return -1;
		}
		--range;
		--jumpTime;
	}
	return atEnd == false ? currJumps + 1 : currJumps;

}


