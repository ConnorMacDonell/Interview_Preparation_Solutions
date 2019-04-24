/*
 * LL_Intersection.h
 *
 *  Created on: Apr 1, 2019
 *      Author: Connor
 */

#include "LinkedList.h"

#ifndef LL_INTERSECTION_H_
#define LL_INTERSECTION_H_

ll_node* findIntersection (ll_node* head1, ll_node* head2);

ll_node* findInterHelper(int big, ll_node* bigHead, int small, ll_node* smallHead);

int findLen(ll_node* head);



#endif /* LL_INTERSECTION_H_ */
