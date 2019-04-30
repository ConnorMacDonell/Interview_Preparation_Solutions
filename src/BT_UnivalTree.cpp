/*
 * BT_UnivalTree.cpp
 *
 *  Created on: Apr 26, 2019
 *      Author: Connor
 */

#include "BT_UnivalTree.h"


int univalTrees(bt_node* root){
	if(!root){
		//error
	}
	int count = 0;
	bool unival = univalHelper(root, count);
	return count;
}

bool univalHelper(bt_node* node, int& count){
	if(!node -> leftChild && !node -> rightChild){
		++count;
		return true;
	}
	if(!node -> rightChild){
		bool leftUnival = univalHelper(node -> leftChild, count);
		if(node -> data == node -> leftChild -> data && leftUnival){
			++count;
			return true;
		}
	}
	if(!node -> leftChild){
		bool rightUnival = univalHelper(node -> rightChild, count);
		if(node -> data == node -> rightChild -> data && rightUnival){
			++count;
			return true;
		}
	}
	if(node -> leftChild && node -> rightChild){
		bool leftUnival = univalHelper(node ->leftChild, count);
		bool rightUnival = univalHelper(node -> rightChild, count);
		if(node -> data == node -> leftChild -> data && node -> data == node -> rightChild -> data
			&& leftUnival && rightUnival){
			++count;
			return true;
		}
	}
	return false;
}

