/*
 * LL_Add.cpp
 *
 *  Created on: Apr 1, 2019
 *      Author: Connor
 */

#include "LL_Add.h"

ll_node* addLL(ll_node* head1, ll_node* head2){
	if(head1 == NULL){
		return head2;
	}
	if(head2 == NULL){
		return head1;
	}

	ll_node* temp1 = head1;
	ll_node* temp2 = head2;
	ll_node* resHead = NULL;
	bool carry = false;

	resHead = addOperation(temp1 -> data, temp2 -> data, carry);
	temp1 = temp1 -> next;
	temp2 = temp2 -> next;
	ll_node* resTemp = resHead;

	while(temp1 && temp2){
		resTemp -> next = addOperation(temp1 -> data, temp2 -> data, carry);
		temp1 = temp1 -> next;
		temp2 = temp2 -> next;
		resTemp = resTemp -> next;
	}

	while(temp1){
		resTemp -> next = addOperation(temp1 -> data, 0, carry);
		temp1 = temp1 -> next;
		resTemp = resTemp -> next;
	}

	while(temp2){
		resTemp -> next = addOperation(temp2 -> data, 0, carry);
		temp2 = temp2 -> next;
		resTemp = resTemp -> next;
	}
	if(carry){
		resTemp -> next = newLLNode(1);
	}
	return resHead;
}

ll_node* addOperation(int first, int second, bool& carry){
	int data = first + second;
	if(carry){
		++data;
		carry = false;
	}
	if(data >= 10){
		carry = true;
		data %= 10;
	}
	return newLLNode(data);
}


