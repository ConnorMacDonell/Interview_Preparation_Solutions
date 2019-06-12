/*
 * BT_Trim.cpp
 *
 *  Created on: Jun 5, 2019
 *      Author: Connor
 */

#include "BT_Trim.h"


void trimBT(bt_node* root){
	if(!root || (!root -> leftChild && !root -> rightChild)){
		return;
	}
	while(!root -> leftChild || !root -> rightChild){
		if(!root -> leftChild && !root -> rightChild){
			return;
		}
		bt_node* temp = root;
		if(root -> leftChild){
			root = root -> leftChild;
		}
		else{
			root = root -> rightChild;
		}
		delete temp;
	}
	trimBT_helper(root -> leftChild, root, true);
	trimBT_helper(root -> rightChild, root, false);
}

void trimBT_helper(bt_node* curr, bt_node* parent, bool isLeft){
	if(!curr || (!curr -> leftChild && !curr -> rightChild)){
		return;
	}
	if(curr -> leftChild && curr -> rightChild){
		trimBT_helper(curr -> leftChild, curr, true);
		trimBT_helper(curr -> rightChild, curr, false);
		return;
	}
	bt_node* temp = curr;
	bool nextLeft = false;
	if(!curr -> leftChild){
		curr = curr -> rightChild;
	}
	else{
		curr = curr -> leftChild;
		nextLeft = true;
	}
	if(isLeft){
		parent -> leftChild = curr;
	}
	else{
		parent -> rightChild = curr;
	}
	delete temp;
	trimBT_helper(curr, parent, nextLeft);
}


