/*
 * LevelList.cpp
 *
 *  Created on: Mar 19, 2019
 *      Author: Connor
 */

#include "BT_LevelList.h"

std::vector<std::list<bt_node*> > levelList(bt_node* root){
	std::vector<std::list<bt_node*> > result;
	if(root == NULL){
		return result;
	}
	std::queue<std::pair<bt_node*, int> > nodeQ;
	nodeQ.push(std::make_pair(root, 0));
	while(!nodeQ.empty()){
		bt_node* current = nodeQ.front().first;
		int level = nodeQ.front().second;
		nodeQ.pop();

		result[level].push_back(current);
		nodeQ.push(std::make_pair(current -> leftChild, level + 1));
		nodeQ.push(std::make_pair(current -> rightChild, level + 1));
	}
	return result;
}


