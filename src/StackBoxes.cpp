/*
 * StackBoxes.cpp
 *
 *  Created on: May 10, 2019
 *      Author: Connor
 */

#include "StackBoxes.h"

std::vector<std::vector<int> > boxStacking(std::vector<std::vector<int> > boxes) {
	if(boxes.empty() || boxes[0].empty()){
		//return {{}};
	}
	std::sort(boxes.begin(), boxes.end(), sortcol);

	std::vector<int> heights;
	std::vector<int> sequences;

	for(int i = 0; i < boxes.size(); ++i){
		heights.push_back(boxes[i][2]);
		sequences.push_back(-1);
	}
	int max = 0;
	int maxIndex = 0;
	for(int i = 1; i < boxes.size(); ++i){
		int temp = boxes[i][2];
		for(int j = 0; j < i; ++j){
			if(boxes[j][0] < boxes[i][0] && boxes[j][1] < boxes[i][1] &&
				 boxes[j][2] < boxes[i][2]){
				if(temp < heights[j] + boxes[i][2]){
					temp = heights[j] + boxes[i][2];
					sequences[i] = j;
				}
			}
		}
		heights[i] = temp > heights[i] ? temp : heights[i];
		if(heights[i] > max){
			max = heights[i];
			maxIndex = i;
		}
	}
	std::vector<std::vector<int> > result;
	int curr = maxIndex;
	while(curr != -1){
		result.push_back(boxes[curr]);
		curr = sequences[curr];
	}

	std::reverse(result.begin(), result.end());
	return result;

}

bool sortcol(const std::vector<int>& vect1, const std::vector<int>& vect2){
	return vect1[2] < vect2[2];
}


