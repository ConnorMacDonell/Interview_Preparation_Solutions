/*
 * RiverSizes.h
 *
 *  Created on: Apr 18, 2019
 *      Author: Connor
 */

#include <vector>
#include <utility>
#include <queue>
#include <iostream>

#include "PaintFill.h"

#ifndef RIVERSIZES_H_
#define RIVERSIZES_H_

std::vector<int> riverSizes(std::vector<std::vector<int> > matrix);

void setToFalse(std::vector<std::vector<bool> >& beenVisited, int numRows, int numCols);

std::vector<std::pair<int, int> > getNeighborsNoDiag(int row, int col);

int visitRiver(const std::vector<std::vector<int > >& matrix,
		std::vector<std::vector<bool> >& beenVisited, int row, int col);



#endif /* RIVERSIZES_H_ */
