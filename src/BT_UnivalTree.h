/*
 * BT_UnivalTree.h
 *
 *  Created on: Apr 26, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a binary tree determine the number of univalue subtrees in the tree
 */

#include "BT_Node.h"

#ifndef BT_UNIVALTREE_H_
#define BT_UNIVALTREE_H_

int univalTrees(bt_node* root);

bool univalHelper(bt_node* node, int& count);



#endif /* BT_UNIVALTREE_H_ */
