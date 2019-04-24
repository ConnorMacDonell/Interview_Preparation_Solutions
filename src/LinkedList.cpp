/*
 * LinkedList.cpp
 *
 *  Created on: Apr 1, 2019
 *      Author: Connor
 */

#include "LinkedList.h"


ll_node* newLLNode(int data){
	ll_node* node = new ll_node;
	node -> data = data;
	node -> next = NULL;
	return node;
}

void nodeSwap(ll_node* prevNode1, ll_node* prevNode2){
	if(!prevNode1 || !prevNode2 || !prevNode1 -> next || !prevNode2 -> next){
		return;
	}

	ll_node* temp1 = prevNode1 -> next;
	ll_node* temp2 = prevNode2 -> next;

	prevNode1 -> next = temp2;
	prevNode2 -> next = temp1;

	ll_node* tempnxt = temp1 -> next;
	temp1 -> next = temp2 -> next;
	temp2 -> next = tempnxt;
}

ll_node* headSwap(ll_node* head, ll_node* prevNode){
	if(!head || !prevNode || !prevNode -> next || !head -> next){
		return head;
	}

	ll_node* temp = head;
	ll_node* temp1 = prevNode -> next;

	prevNode -> next = temp;

	ll_node* hdNext = temp -> next;
	temp -> next = temp1 -> next;
	temp1 -> next = hdNext;

	head = temp1;
	return head;

}

void destroyLL(ll_node* head){
	while(head){
		ll_node* temp = head;
		head = head -> next;
		delete temp;
	}
	delete head;
}


