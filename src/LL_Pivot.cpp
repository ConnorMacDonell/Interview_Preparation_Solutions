/*
 * LL_Pivot.cpp
 *
 *  Created on: Mar 18, 2019
 *      Author: Connor
 */

#include "LL_Pivot.h"

ll_node* pivot_ll(ll_node* head, int value){
	if(!head || !head -> next){
		return head;
	}
	if(head -> data >= value){
		ll_node* temp = findLesser(head, value);
		if(temp == NULL){
			std::cout << "temp is null" << std::endl;
			if(head -> data == value){
				return head;
			}
			temp = head;
			while(temp -> next -> data != value){
				temp = temp -> next;
			}
			head = headSwap(head, temp);
			return head;
		}
		head = headSwap(head, temp);
	}
	ll_node* low = head;
	ll_node* temp = head;
	while(temp -> next != NULL){
		if(temp -> next -> data >= value){
			temp = temp -> next;
		}
		else{
			nodeSwap(low, temp);
			low = low -> next;
			temp = temp -> next;
		}
	}
	return head;
}

ll_node* findLesser(ll_node* head, int value){
	ll_node* temp = head;
	while(temp -> next && temp -> next -> data >= value){
		temp = temp -> next;
	}
	if(!temp -> next && temp -> data >= value){
		return NULL;
	}
	return temp;
}

