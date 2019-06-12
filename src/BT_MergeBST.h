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

void mergeBST(bt_node* root1, bt_node* root2);

void buildLeftStack(bt_node* node, std::stack<bt_node*>& stack);





#endif /* BT_MERGEBST_H_ */
