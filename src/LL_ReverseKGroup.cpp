/*
 * LL_ReverseKGroup.cpp
 *
 *  Created on: May 24, 2019
 *      Author: Connor
 */

#include "LL_ReverseKGroup.h"

ListNode* reverseList(ListNode* head){
	if(!head || !head -> next){
		return head;
	}
	ListNode* prev = NULL;
	ListNode* curr = head;
	ListNode* next = curr -> next;

	while(curr){
		curr -> next = prev;
		prev = curr;
		curr = next;
		if(next){
			next = next -> next;
		}
	}
	return prev;
}

ListNode* reverseKGroup(ListNode* head, int k){
	if(!head){
		return head;
	}
	int size = 0;
	ListNode* curr = head;
	while(curr){
		++size;
		curr = curr -> next;
	}
	if(size < k || size == 1){
		return head;
	}

	bool doLast = size % k == 0 ? true : false;
	--k;
	bool broken = false;

	std::vector<ListNode*> listsOfK;
	curr = head;
	ListNode* currHead = head;
	while(curr && currHead){
		for(int i = 0; i < k; ++i){
			curr = curr -> next;
			if(!curr){
				listsOfK.push_back(currHead);
				broken = true;
				break;
			}
		}
		if(broken){
			break;
		}
		listsOfK.push_back(currHead);
		currHead = curr -> next;
		curr -> next = NULL;
		curr = currHead;
	}
	int numLists = listsOfK.size() - 1;
	if(doLast){
		++numLists;
	}
	for(int i = 0; i < numLists; ++i){
		listsOfK[i] = reverseList(listsOfK[i]);
	}

	for(int i = 0; i < listsOfK.size() - 1; ++i){
		curr = listsOfK[i];
		while(curr -> next){
			curr = curr -> next;
		}
		curr -> next = listsOfK[i + 1];
	}
	return listsOfK[0];

}


