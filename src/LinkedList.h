/*
 * LinkedList.h
 *
 *  Created on: Apr 1, 2019
 *      Author: Connor
 */

/*
 * Linked List implementation
 */

#include <algorithm>
#include <iostream>
#include <cmath>

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct ll_node{
	int data;
	ll_node* next;
};

ll_node* newLLNode(int data);

void nodeSwap(ll_node* prevNode1, ll_node* prevNode2);

ll_node* headSwap(ll_node* head, ll_node* node);

void destroyLL(ll_node* head);



#endif /* LINKEDLIST_H_ */
