/*
 * BT_SubTreeSum.h
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a binary tree return the most frequently occurring subtree sum
 */

#include <unordered_map>
#include <iostream>
#include <stdexcept>

#include "BT_Node.h"

#ifndef BT_SUBTREESUM_H_
#define BT_SUBTREESUM_H_

int freqSubTreeSum(bt_node* root);

int freqSumHelper(bt_node* node, std::unordered_map<int, int>& counts, int& freqSum, int freqCount);



#endif /* BT_SUBTREESUM_H_ */
