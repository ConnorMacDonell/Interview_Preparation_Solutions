/*
 * LL_LoopDetection.cpp
 *
 *  Created on: Apr 16, 2019
 *      Author: Connor
 */

#include "LL_LoopDetection.h"

ll_node* startOfCycle(ll_node* head){
	if(!head || !head -> next){
		return head;
	}
	ll_node* slow = head;
	ll_node* fast = head -> next;

	while(slow != fast && fast){

		fast = fast -> next;
		if(fast == slow || !fast){
			break;
		}
		fast = fast -> next;
		if(fast == slow || !fast){
			break;
		}
		slow = slow -> next;
	}
	if(!fast){
		delete slow;
		return fast;
	}

	int cycleLen = 1;
	fast = fast -> next;
	while(fast != slow){
		++cycleLen;
		fast = fast -> next;
	}

	slow = head;
	fast = head;
	int i = 0;
	while(i < cycleLen){
		++i;
		fast = fast -> next;
	}
	while(fast != slow){
		fast = fast -> next;
		slow = slow -> next;
	}
	delete fast;
	return slow;
}

