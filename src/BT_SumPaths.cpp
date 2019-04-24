/*
 * SumPaths.cpp
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include "BT_SumPaths.h"


int sumPaths(bt_node* root){
	if (root == NULL){
		return -1;
	}
	int curr = 0;
	return sumPathsHelper(root, curr);
}

int sumPathsHelper(bt_node* root, int curr){
	curr += root -> data;
	if(root -> leftChild == NULL && root -> rightChild == NULL){
		return curr;
	}

	curr *= 10;
	int leftResult = 0;
	int rightResult = 0;
	if(root -> leftChild != NULL){
		leftResult = sumPathsHelper(root -> leftChild, curr);
	}
	if(root -> rightChild != NULL){
		rightResult = sumPathsHelper(root -> rightChild, curr);
	}
	return leftResult + rightResult;

}

void printPreOrder(bt_node* root){
	if(root == NULL){
		return;
	}
	std::cout << root -> data << std::endl;
	printPreOrder(root -> leftChild);
	printPreOrder(root -> rightChild);
}

