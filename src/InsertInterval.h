/*
 * InsertInterval.h
 *
 *  Created on: May 27, 2019
 *      Author: Connor
 */

/*
 * Problem Description:
 * Given anarray of non overlapping intervals sorted by their start point and a new interval. Insert
 * the new interval into the array and merge overlapping intervals if necessary
 */

#include <vector>
#include <utility>
#include <algorithm>

#ifndef INSERTINTERVAL_H_
#define INSERTINTERVAL_H_

std::vector<std::pair<int, int> > insertInterval(const std::vector<std::pair<int, int> >& intervals,
		std::pair<int, int> toInsert);



#endif /* INSERTINTERVAL_H_ */
