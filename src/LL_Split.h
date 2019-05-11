/*
 * LL_Split.h
 *
 *  Created on: May 10, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a linked list split it into two separate linked lists, one containing its even nodes and the
 * other containing its odd nodes. Nodes can be considered to be zero indexed (zero is an even number)
 */

#include <utility>

#include "LinkedList.h"

#ifndef LL_SPLIT_H_
#define LL_SPLIT_H_


std::pair<ll_node*, ll_node*> splitLL(ll_node* head);


#endif /* LL_SPLIT_H_ */
