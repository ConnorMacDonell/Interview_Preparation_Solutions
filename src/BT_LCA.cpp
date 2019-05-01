/*
 * BT_LCA.cpp
 *
 *  Created on: May 1, 2019
 *      Author: Connor
 */

#include "BT_LCA.h"

bt_node* lca(bt_node* root, bt_node* node1, bt_node* node2){
	if(!root || !node1 || !node2){
		return NULL;
	}
	if(root == node1 && root == node2){
		return root;
	}

	bt_node* left = lca(root -> leftChild, node1, node2);
	if(left && left != node1 && left != node2){
		return left;
	}
	bt_node* right = lca(root -> rightChild, node1, node2);
	if(right && right != node1 && right != node2){
		return right;
	}
	if(left && right){
		return root;
	}
	if(root == node1 || root == node2){
		return root;
	}
	else{
		return left != NULL ? left : right;
	}


}


