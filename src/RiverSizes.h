/*
 * RiverSizes.h
 *
 *  Created on: Apr 18, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a 2D matrix wherein a 1 represents land and a 0 represents water define a river to be any group
 * of adjacent (excluding diagonally adjacent) water tiles of size 1 or more, return the size of all
 * rivers
 */

#include <vector>
#include <utility>
#include <queue>
#include <iostream>

#include "PaintFill.h"

#ifndef RIVERSIZES_H_
#define RIVERSIZES_H_

std::vector<int> riverSizes(const std::vector<std::vector<int> >& matrix);

int bfsVisitRiver(const std::vector<std::vector<int> >& matrix, int row, int col,
		std::vector<std::vector<bool> >& beenVisited);

void setToFalse(std::vector<std::vector<bool> >& beenVisited, int numRows, int numCols);

std::vector<std::pair<int, int> > getNeighborsNoDiag(int row, int col);

int visitRiver(const std::vector<std::vector<int > >& matrix,
		std::vector<std::vector<bool> >& beenVisited, int row, int col);



#endif /* RIVERSIZES_H_ */
