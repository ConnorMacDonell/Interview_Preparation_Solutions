/*
 * MergeIntervals.h
 *
 *  Created on: Apr 2, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a vector of integer pairs representing intervals merge all overlapping intervals. It can be
 * assumed that the input is sorted interval start times but may or may not be sorted secondarily by
 * interval end times.
 */

#include <utility>
#include <vector>
#include <stdexcept>
#include <iostream>

#ifndef MERGEINTERVALS_H_
#define MERGEINTERVALS_H_

std::vector<std::pair<int, int> > mergeIntervals(std::vector<std::pair<int, int> > input);



#endif /* MERGEINTERVALS_H_ */
