/*
 * MinimumSemesters.cpp
 *
 *  Created on: Mar 28, 2019
 *      Author: Connor
 */

#include <stdexcept>

#include "MinimumSemesters.h"

void DFS(gr_node node, std::stack<std::pair<gr_node, int> >& nodeStack){
	node.setState(VISITING);
	std::vector<gr_node> neighbors = node.getNeighbors();
	for(int i = 0; i < neighbors.size(); ++i){
		if(neighbors[i].getState() == UNVISITED){
			DFS(neighbors[i], nodeStack);
		}
	}
	node.setState(VISITED);
	nodeStack.push(std::make_pair(node, -1));
}

std::stack<std::pair<gr_node, int> > topologicalSort(Graph courses){
	if(courses.empty()){
		throw std::invalid_argument("Graph is empty");
	}

	std::vector<gr_node> nodes = courses.getNodes();
	std::stack<std::pair<gr_node, int> > nodeStack;

	for(int i = 0; i < nodes.size(); ++i){
		if(nodes[i].getState() == UNVISITED){
			DFS(nodes[i], nodeStack);
		}
	}

	return nodeStack;

}

int minSemesters(std::stack<std::pair<gr_node, int> > nodeStack){
	int result = 1;

	while(!nodeStack.empty()){
		gr_node curr = nodeStack.top().first;
		int semester = nodeStack.top().second;
		nodeStack.pop();
		std::vector<gr_node> neighbors = curr.getNeighbors();
		for(int i = 0; i < neighbors.size(); ++i){

		}
	}

}


