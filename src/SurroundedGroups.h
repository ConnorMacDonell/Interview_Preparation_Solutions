/*
 * SurroundedGroups.h
 *
 *  Created on: Apr 12, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a 2d matrix of Xs and Os if a group of Os is surrounded by Xs replace the group by Xs.
 * Diagonals need not be considered. If a group of Os touches the edge it is not considered surrounded
 *
 */

#include <vector>


#ifndef SURROUNDEDGROUPS_H_
#define SURROUNDEDGROUPS_H_

void surroundedGroups(std::vector<std::vector<char> >& matrix);

void setSafeGroup(std::vector<std::vector<char> > matrix, std::vector<std::vector<bool> >& isSafe,
		int row, int col);

void setToFalse(std::vector<std::vector<bool> > matrix, int height, int width);

bool oob(std::vector<std::vector<char> > matrix, int row, int col);



#endif /* SURROUNDEDGROUPS_H_ */
