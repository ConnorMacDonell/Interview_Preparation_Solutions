/*
 * MergeSort.h
 *
 *  Created on: Apr 3, 2019
 *      Author: Connor
 */

#include <vector>
#include <iostream>

#ifndef MERGESORT_H_
#define MERGESORT_H_

void mergeSort(std::vector<int>& input);

void mergeSortHelper(std::vector<int>& input, int start, int end);

void merge(std::vector<int>& input, int start, int end, int mid);



#endif /* MERGESORT_H_ */
