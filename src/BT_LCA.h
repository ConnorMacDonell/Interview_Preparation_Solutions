/*
 * BT_LCA.h
 *
 *  Created on: May 1, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a Binary Tree and two nodes contained in that tree determine the Least Common Ancestor of the
 * nodes defined as the deepest node which is a parent of both nodes where a node can be considered as
 * its own parent
 */

#include "BT_Node.h"

#ifndef BT_LCA_H_
#define BT_LCA_H_

bt_node* lca(bt_node* root, bt_node* node1, bt_node* node2);

bool contains(bt_node* ancestor, bt_node* node);



#endif /* BT_LCA_H_ */
