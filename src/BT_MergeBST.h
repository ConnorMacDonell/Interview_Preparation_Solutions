/*
 * BT_MergeBST.h
 *
 *  Created on: Apr 12, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Give two binary search trees print their merged data in sorted order using at most O(tree1 height +
 * tree2 height) extra space
 */

#include <vector>
#include <stack>
#include <iostream>

#include "BT_Node.h"

#ifndef BT_MERGEBST_H_
#define BT_MERGEBST_H_

void mergeBST(bst_node* root1, bst_node* root2);

void buildLeftStack(bst_node* node, std::stack<bst_node*>& stack);

void printInOrder(bst_node* root);





#endif /* BT_MERGEBST_H_ */
