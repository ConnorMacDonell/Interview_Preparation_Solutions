/*
 * QuickSwap.h
 *
 *  Created on: Apr 17, 2019
 *      Author: Connor
 */

/*
 * Given an array of integers and an number k, return the k smallest element from the array
 */
#include <vector>
#include <algorithm>
#include <iostream>

#ifndef QUICKSWAP_H_
#define QUICKSWAP_H_

int partition(std::vector<int>& array, int pivot);

int quickselect(std::vector<int> array, int k);



#endif /* QUICKSWAP_H_ */
