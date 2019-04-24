/*
 * BT_SumPaths.h
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given the root to a binary tree sum all paths from root to leaf
 */

#include "BT_Node.h"

#ifndef BT_SUMPATHS_H_
#define BT_SUMPATHS_H_

int sumPaths(bt_node* root);

int sumPathsHelper(bt_node* root, int curr);

void printPreOrder(bt_node* root);

void printPostOrder(bt_node* root);



#endif /* BT_SUMPATHS_H_ */
