/*
 * bt_Node.h
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include <algorithm>
#include <vector>
#include <cmath>
#include <iostream>

#ifndef BT_NODE_H_
#define BT_NODE_H_

struct bt_node{
	bt_node* leftChild;
	bt_node* rightChild;
	int data;
};

struct bst_node{
	bst_node* left;
	bst_node* right;
	int data;
};

bt_node* makeNode(int n);

void destroyTree(bt_node* root);



#endif /* BT_NODE_H_ */
