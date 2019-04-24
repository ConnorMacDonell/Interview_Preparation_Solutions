/*
 * PaintFill.h
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a 2D matrix of integers wherein each cell of the matrix represents a pixel and the value stored
 * in that cell represents the color of the pixel implement a paint bucket function for the matrix.
 * That is, given a target cell and color set all adjacent cells of the same color as the target cell to
 * the target color
 */

#include <vector>
#include <utility>


#ifndef PAINTFILL_H_
#define PAINTFILL_H_

void paintFill(std::vector<std::vector<int> >& input, int targetColor, int targetRow, int targetCol);

void paintFillHelper(std::vector<std::vector<int> >& input, int targetColor, int row, int col,
		int color);

bool oob(std::vector<std::vector<int> > input, int row,int col);

std::vector<std::pair<int, int> > getNeighbors(int row,int col);




#endif /* PAINTFILL_H_ */
