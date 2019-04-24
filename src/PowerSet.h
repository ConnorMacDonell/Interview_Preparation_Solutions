/*
 * PowerSet.h
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */
/*
 * Problem Description
 * Return all subsets of given set
 */

#include <vector>
#include <iostream>

#ifndef POWERSET_H_
#define POWERSET_H_


 std::vector<std::vector<int> > powerSet(std::vector<int> input);

void powerSetHelper(std::vector<int> input, std::vector<std::vector<int> >& powSet,
		std::vector<int> buffer, std::vector<bool> inBuffer);

void setToFalse(std::vector<bool>& input, int size);


#endif /* POWERSET_H_ */
