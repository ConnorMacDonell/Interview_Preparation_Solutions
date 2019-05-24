/*
 * LL_ReverseKGroup.h
 *
 *  Created on: May 24, 2019
 *      Author: Connor
 */

/*
 * Given a linked list and an number k where 0 < k <= listSize, reverse every group of size k in the
 * list. If the list is not a multiple of k the last chunk should be left untouched
 */

#include <algorithm>
#include <vector>
#include <iostream>

#ifndef LL_REVERSEKGROUP_H_
#define LL_REVERSEKGROUP_H_

struct ListNode{
	int data;
	ListNode* next;
	ListNode (int data) : data(data), next(NULL) {}
};

ListNode* reverseList(ListNode* head);

ListNode* reverseKGroup(ListNode* head, int k);



#endif /* LL_REVERSEKGROUP_H_ */
