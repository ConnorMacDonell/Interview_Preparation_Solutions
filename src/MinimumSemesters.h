/*
 * MinimumSemesters.h
 *
 *  Created on: Mar 28, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a directed graph with nodes representing courses and an edge from nodeA to nodeB denoting
 * that nodeA is a prerequisite of nodeB, assuming that unlimited courses may be taken per semester
 * but prerequisites must be taken prior to their dependent courses determine the minimum number of
 * semesters to complete the course work
 */

#include <stack>

#include "Graph.h"

#ifndef MINIMUMSEMESTERS_H_
#define MINIMUMSEMESTERS_H_

void DFS(gr_node node, std::stack<std::pair<gr_node, int> >& nodeStack);

std::stack<std::pair<gr_node, int> > topologicalSort(Graph courses);

int minSemesters(std::stack<std::pair<gr_node, int> > nodeStack);



#endif /* MINIMUMSEMESTERS_H_ */
