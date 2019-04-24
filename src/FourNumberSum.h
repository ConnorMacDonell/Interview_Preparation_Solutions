/*
 * FourNumberSum.h
 *
 *  Created on: Apr 18, 2019
 *      Author: Connor
 */

/*
 * Given a non-empty array of unique integers and a target number return all quadruplets which sum to
 * the target in a 2D array
 */

#include <vector>
#include <unordered_map>
#include <utility>
#include <iostream>


#ifndef FOURNUMBERSUM_H_
#define FOURNUMBERSUM_H_

std::unordered_map<int, std::pair<int, int> > buildPairMap(const std::vector<int>& array);

std::vector<std::vector<int> > fourNumberSum(std::vector<int> array, int targetSum);



#endif /* FOURNUMBERSUM_H_ */
