/*
 * BT_BottomView.cpp
 *
 *  Created on: Apr 30, 2019
 *      Author: Connor
 */

#include "BT_BottomView.h"

std::vector<int> bottomView(bt_node* root){
	if(!root){
		//error
	}
	if(!root -> leftChild && !root -> rightChild){
		std::vector<int> temp;
		temp.push_back(root -> data);
		return temp;
	}
	std::unordered_map<int, std::pair<int, int> > bottomMap;
	bottomViewHelper(root, 0, 0, bottomMap);
	std::vector<int> result;

	for(std::unordered_map<int, std::pair<int, int> >::iterator it = bottomMap.begin();
			it != bottomMap.end(); ++it){
		std::pair<int, int> temp = it -> second;
		result.push_back(temp.second);
	}
	return result;
}

void bottomViewHelper(bt_node* node, int parentDepth, int horDist,
		std::unordered_map<int, std::pair<int, int> >& bottomMap){
	if(!node){
		return;
	}
	int currDepth = parentDepth + 1;

	if(bottomMap.find(horDist) != bottomMap.end()){
		std::pair<int, int> temp = bottomMap[horDist];
		if(currDepth > temp.first){
			bottomMap[horDist] = std::make_pair(currDepth, node -> data);
		}
	}
	else{
		bottomMap[horDist] = std::make_pair(currDepth, node -> data);
	}
	bottomViewHelper(node -> leftChild, currDepth, horDist - 1, bottomMap);
	bottomViewHelper(node -> rightChild, currDepth, horDist + 1, bottomMap);
}


