/*
 * BuildLargest.h
 *
 *  Created on: May 10, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given an array of integers rearrange it so that if the integers were printed in order as one integer
 * the printed result would be maximized
 */

#include <vector>
#include <unordered_map>
#include <algorithm>

#ifndef BUILDLARGEST_H_
#define BUILDLARGEST_H_

std::vector<int> buildLargest(const std::vector<int>& input);

bool pairFirstSecondSort(const std::pair<int, int>& pair1, const std::pair<int, int>& pair2);



#endif /* BUILDLARGEST_H_ */
