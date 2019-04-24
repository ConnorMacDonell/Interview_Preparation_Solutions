/*
 * IsSubTree.cpp
 *
 *  Created on: Mar 22, 2019
 *      Author: Connor
 */

#include "BT_IsSubTree.h"

bool isSubTree(bt_node* bigTree, bt_node* smallerTree){
	if(smallerTree == NULL){
		return true;
	}
	std::queue<bt_node*> bfsQ;
	bt_node* curr = bigTree;
	bfsQ.push(curr);

	while(!bfsQ.empty()){
		curr = bfsQ.front();
		bfsQ.pop();
		if(curr -> data == smallerTree -> data){
			if(comparativePreOrder(curr, smallerTree)){
				return true;
			}
		}
		if(curr -> leftChild){
			bfsQ.push(curr -> leftChild);
		}
		if(curr -> rightChild){
			bfsQ.push(curr -> rightChild);
		}
	}
	delete curr;
	return false;
}

bool comparativePreOrder(bt_node* tOneNode, bt_node* tTwoNode){
	if(!tOneNode && !tTwoNode){
		return true;
	}
	if(!tOneNode || !tTwoNode || tOneNode -> data != tTwoNode -> data){
		return false;
	}
	bool left = comparativePreOrder(tOneNode -> leftChild, tTwoNode -> leftChild);
	bool right = comparativePreOrder(tOneNode -> rightChild, tTwoNode -> rightChild);

	if(!left || !right){
		return false;
	}
	return true;
}
