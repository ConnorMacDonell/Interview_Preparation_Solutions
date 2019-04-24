/*
 * MinStepsToExit.h
 *
 *  Created on: Apr 16, 2019
 *      Author: Connor
 */

/*
 * Given a square matrix of 0s 1s and a single 2 where 0s represent paths, 1s represent walls, and the 2
 * represents the starting location determine the shortest path to the edge of the matrix. If no such
 * path exists return -1
 */

#include <vector>
#include <queue>
#include <iostream>

#include "RotateMatrix.h"

#ifndef MINSTEPSTOEXIT_H_
#define MINSTEPSTOEXIT_H_

int minStepsToExit(std::vector<std::vector<int> >& matrix);

std::pair<int, int> findStart(const std::vector<std::vector<int> >& matrix);

bool onEdge(std::pair<int, int> coords, int sideLen);

std::vector<std::pair<int, int> > getAdjacent(int row, int col);

bool oob(int sideLen, std::pair<int, int> coords);


#endif /* MINSTEPSTOEXIT_H_ */
