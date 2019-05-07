/*
 * PrintCombs.h
 *
 *  Created on: May 7, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given and input array and an integer k print all unique combinations of elements of the array of
 * length k
 */

#include <vector>
#include <iostream>

#ifndef PRINTCOMBS_H_
#define PRINTCOMBS_H_

void printCombs(const std::vector<int>& input, int k);

void printCombsHelper(const std::vector<int>& input, std::vector<int> buffer, int index, int k);

void printVect(const std::vector<int>& input);



#endif /* PRINTCOMBS_H_ */
