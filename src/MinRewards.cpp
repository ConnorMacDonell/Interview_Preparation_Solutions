/*
 * MinRewards.cpp
 *
 *  Created on: May 7, 2019
 *      Author: Connor
 */

#include "MinRewards.h"

int minRewards(std::vector<int> scores) {
  if(scores.empty()){
		return 0;
	}
	std::vector<int>rewards(scores.size(), 1);

	for(int i = 0; i < scores.size() - 1; ++i){
		if(scores[i] < scores[i + 1]){
			rewards[i + 1] += rewards[i];
		}
	}
	for(int i = scores.size() - 1; i > 0; --i){
		if(scores[i - 1] > scores[i]){
			if(rewards[i - 1] <= rewards[i]){
				rewards[i - 1] = rewards[i] + 1;
			}
		}
	}
	int result = 0;
	for(int i = 0; i < rewards.size(); ++i){
		result += rewards[i];
	}
	return result;
}


