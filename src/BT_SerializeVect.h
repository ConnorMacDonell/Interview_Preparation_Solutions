/*
 * SerializeVect.h
 *
 *  Created on: Mar 19, 2019
 *      Author: Connor
 */

#include <vector>
#include <algorithm>

#include "BT_Node.h"

#ifndef SERIALIZEVECT_H_
#define SERIALIZEVECT_H_

bt_node* serializeVect(std::vector<int> data);

bt_node* serializeVectHelper(std::vector<int> data, int start, int end);

std::vector<int> preorderVectMaker(bt_node* root);

std::vector<int> preorderVectMakerHelper(bt_node* root, std::vector<int> result);



#endif /* SERIALIZEVECT_H_ */
