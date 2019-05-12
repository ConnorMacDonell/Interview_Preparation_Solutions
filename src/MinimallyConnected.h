/*
 * MinimallyConnected.h
 *
 *  Created on: May 12, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * A minimally connected graph is a connected graph such that no edge can be removed while leaving the
 * graph connected. Given an undirected graph determine whether it is mininally connected.
 */

#include "Graph.h"

#ifndef MINIMALLYCONNECTED_H_
#define MINIMALLYCONNECTED_H_

bool isMinimallyConnected(Graph& gr);

bool mcDFS(gr_node* node, gr_node* parent);



#endif /* MINIMALLYCONNECTED_H_ */
