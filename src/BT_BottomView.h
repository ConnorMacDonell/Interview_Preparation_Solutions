/*
 * BT_BottomView.h
 *
 *  Created on: Apr 30, 2019
 *      Author: Connor
 */

/*
 * Problem description
 * The horizontal distance of a node in a tree is defined as: if the node is the root of the tree the
 * horizontal distance is 0, every right child has horizontal distance +1 of its parent, every left
 * child has horizontal distance -1 of its parent. Given a tree print out the bottom view of the tree
 * defined as the lowest node at each horizontal distance
 */

#include "BT_Node.h"
#include <unordered_map>
#include <vector>
#include <utility>


#ifndef BT_BOTTOMVIEW_H_
#define BT_BOTTOMVIEW_H_

std::vector<int> bottomView(bt_node* root);

void bottomViewHelper(bt_node* node, int parentDepth, int horDist,
		std::unordered_map<int, std::pair<int, int> >& bottomMap);



#endif /* BT_BOTTOMVIEW_H_ */
