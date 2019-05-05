/*
 * BT_IterativeInOrder.h
 *
 *  Created on: May 5, 2019
 *      Author: Connor
 */

/*
 * Problem
 * Given a binary tree node perform an in-order traversal in O(1) space, it can be assumed that the
 * parent of the root is initialized to NULL
 */

#include <iostream>
#include <algorithm>

#ifndef BT_ITERATIVEINORDER_H_
#define BT_ITERATIVEINORDER_H_


struct btp_node{
	btp_node* left;
	btp_node* right;
	btp_node* parent;
	int data;
};

void iterativeInOrderTraversal(btp_node* root);


#endif /* BT_ITERATIVEINORDER_H_ */
