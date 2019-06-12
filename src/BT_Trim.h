/*
 * BT_Trim.h
 *
 *  Created on: Jun 5, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a binary tree make it a full binary tree by removing all nodes with exactly one child
 */

#include "BT_Node.h"

#ifndef BT_TRIM_H_
#define BT_TRIM_H_

void trimBT(bt_node* root);

void trimBT_helper(bt_node* curr, bt_node* parent, bool isLeft);



#endif /* BT_TRIM_H_ */
