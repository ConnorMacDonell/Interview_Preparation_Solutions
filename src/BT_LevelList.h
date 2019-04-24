/*
 * LevelList.h
 *
 *  Created on: Mar 19, 2019
 *      Author: Connor
 */

#include <vector>
#include <queue>
#include <list>
#include <utility>
#include "BT_Node.h"

#ifndef LEVELLIST_H_
#define LEVELLIST_H_

std::vector<std::list<bt_node*> > levelList(bt_node* root);



#endif /* LEVELLIST_H_ */
