/*
 * StackBoxes.h
 *
 *  Created on: May 10, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a 2D array representing a series of boxes defined by their length, width, and height in that
 * order determine the highest stack of boxes which can be made from the array while following the rule
 * that any box must have strictly lower length, width, and height than all boxes below it
 */

#include <vector>
#include <algorithm>
#include <iostream>

#ifndef STACKBOXES_H_
#define STACKBOXES_H_

bool sortcol(const std::vector<int>& vect1, const std::vector<int>& vect2);

std::vector<std::vector<int> > boxStacking(std::vector<std::vector<int> > disks);





#endif /* STACKBOXES_H_ */
