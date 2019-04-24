/*
 * LL_IsPalindrome.cpp
 *
 *  Created on: Apr 2, 2019
 *      Author: Connor
 */

#include "LL_IsPalindrome.h"

bool isPalindrome(ll_node* head){
	if(!head || !head -> next){
		return true;
	}
	ll_node* runner = head;
	ll_node* mid = head;
	while(runner -> next){
		runner = runner -> next;
		if(runner -> next){
			runner = runner -> next;
			mid = mid -> next;
		}
	}
	ll_node* secondHalf = reverseLL(mid -> next);
	ll_node* temp = secondHalf;
	runner = head;
	while(temp){
		if(temp -> data == runner -> data){
			temp = temp -> next;
			runner = runner -> next;
		}
		else{
			mid -> next = reverseLL(secondHalf);
			return false;
		}
	}
	mid -> next = reverseLL(secondHalf);
	return true;
}

ll_node* reverseLL(ll_node* head){
	if(!head || !head -> next){
		return head;
	}
	ll_node* prev = NULL;
	ll_node* curr = head;
	ll_node* next = head -> next;

	while(curr){
		curr -> next = prev;
		prev = curr;
		curr = next;
		if(next){
			next = next -> next;
		}
	}
	head = prev;
	return head;
}


