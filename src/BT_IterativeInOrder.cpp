/*
 * BT_IterativeInOrder.cpp
 *
 *  Created on: May 5, 2019
 *      Author: Connor
 */

#include "BT_IterativeInOrder.h"

void iterativeInOrderTraversal(btp_node* root) {
	if(!root){
		return;
	}
	btp_node* curr = root;
	btp_node* prev = curr -> parent;

	while(curr){
		if(curr -> left && prev == curr -> parent){
			prev = curr;
			curr = curr -> left;
		}
		else if(prev == curr -> left){
			//process node however necessary
			std::cout << curr -> data << "\n";
			if(curr -> right){
				prev = curr;
				curr = curr -> right;
			}
			else{
				prev = curr;
				curr = curr -> parent;
			}
		}
		else if(prev == curr -> right){
				prev = curr;
				curr = curr -> parent;
		}
		else if(!curr -> left && !curr -> right){
			//process node however necessary
			std::cout << curr -> data << "\n";
			prev = curr;
			curr = curr -> parent;
		}
		else if(!curr -> left && prev == curr -> parent){
			//process node however necessary
			std::cout << curr -> data << "\n";
			prev = curr;
			curr = curr -> right;
		}
	}
}



