/*
 * LL_Split.cpp
 *
 *  Created on: May 10, 2019
 *      Author: Connor
 */

#include "LL_Split.h"

std::pair<ll_node*, ll_node*> splitLL(ll_node* head){
	if(!head){
		//error
	}
	if(!head -> next){
		//error
	}

	ll_node* curr = head -> next  -> next;
	ll_node* evenHead = head;
	ll_node* oddHead = head -> next;
	ll_node* evenTail = evenHead;
	ll_node* oddTail = oddHead;

	int count = 2;

	while(curr){
		if(count % 2 == 0){
			evenTail -> next  = curr;
			evenTail = evenTail -> next;

		}
		else{
			oddTail -> next = curr;
			oddTail = oddTail -> next;
		}
		curr = curr -> next;
		++count;
	}
	oddTail -> next = NULL;
	evenTail -> next = NULL;

	oddTail = NULL;
	evenTail = NULL;
	curr = NULL;
	delete oddTail;
	delete evenTail;
	delete curr;

	return std::make_pair(evenHead, oddHead);
}


