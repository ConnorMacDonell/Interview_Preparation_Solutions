/*
 * BT_FreqSubTreeSum.cpp
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

#include "BT_FreqSubTreeSum.h"

int freqSubTreeSum(bt_node* root){
	if(!root){
		throw std::invalid_argument("Tree is null: freqSubTreeSum");
	}
	if(!root -> leftChild && !root -> rightChild){
		return root -> data;
	}
	std::unordered_map<int, int> counts;
	int freqSum = 0;
	int freqCount = 0;
	int unNeeded = freqSumHelper(root, counts, freqSum, freqCount);
	return freqSum;
}

int freqSumHelper(bt_node* node, std::unordered_map<int, int>& counts, int& freqSum, int freqCount){
	if(!node){
		return 0;
	}
	int leftSum = freqSumHelper(node -> leftChild, counts, freqSum, freqCount);
	int rightSum = freqSumHelper(node -> rightChild, counts, freqSum, freqCount);

	int sum = leftSum + rightSum + node -> data;
	if(counts.find(sum) == counts.end()){
		counts[sum] = 1;
	}
	else{
		counts[sum] += 1;
		if(counts[sum] > freqCount){
			freqCount  = counts[sum];
			freqSum = sum;
		}
	}
	return sum;
}


