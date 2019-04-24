/*
 * BT_Node.cpp
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

#include "BT_Node.h"

bt_node* makeNode(int n){
	bt_node* temp = new bt_node;
	temp -> data = n;
	temp -> leftChild = NULL;
	temp -> rightChild = NULL;
	return temp;
}

void destroyTree(bt_node* root){
	if(!root){
		return;
	}
	destroyTree(root -> leftChild);
	destroyTree(root -> rightChild);
	delete root;
}


