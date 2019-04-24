/*
 * LL_Intersection.cpp
 *
 *  Created on: Apr 1, 2019
 *      Author: Connor
 */

#include "LL_Intersection.h"

ll_node* findIntersection (ll_node* head1, ll_node* head2){
	if(head1 == NULL || head2 == NULL){
		return NULL;
	}
	int len1 = findLen(head1);
	int len2 = findLen(head2);
	if(len1 > len2){
		return findInterHelper(len1, head1, len2, head2);
	}
	else{
		return findInterHelper(len2, head2, len1, head1);
	}
}

ll_node* findInterHelper(int big, ll_node* bigHead, int small, ll_node* smallHead){
	ll_node* bigRunner = bigHead;
	ll_node* smallRunner = smallHead;
	int diff = big - small;
	while(diff > 0){
		bigRunner = bigRunner -> next;
		--diff;
	}
	while(bigRunner != smallRunner && bigRunner != NULL){
		bigRunner = bigRunner -> next;
		smallRunner = smallRunner -> next;
	}
	return bigRunner;
}

int findLen(ll_node* head){
	int len = 1;
	ll_node* temp = head;
	while(temp -> next != NULL){
		++len;
		temp = temp -> next;
	}
	return len;
}
