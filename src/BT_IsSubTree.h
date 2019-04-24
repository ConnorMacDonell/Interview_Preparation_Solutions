/*
 * IsSubTree.h
 *
 *  Created on: Mar 22, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given two extremely large binary trees T1 and T2 with T1 much larger than T2 determine whether T2 is
 * a subtree of T1
 */

#include <queue>
#include <iostream>

#include "BT_Node.h"

#ifndef ISSUBTREE_H_
#define ISSUBTREE_H_

bool isSubTree(bt_node* bigTree, bt_node* smallerTree);

bool comparativePreOrder(bt_node* tOneNode, bt_node* tTwoNode);



#endif /* ISSUBTREE_H_ */
