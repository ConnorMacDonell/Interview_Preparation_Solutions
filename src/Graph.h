/*
 * Graph.h
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include <vector>
#include <unordered_map>
#include <string>

#ifndef GRAPH_H_
#define GRAPH_H_

	enum State{
		UNVISITED,
		VISITING,
		VISITED
	};

class gr_node{
public:
	std::vector<gr_node*> getNeighbors();
	void addEdge(gr_node* node);
	State getState();
	void setState(State set);
	void setName(char nm);
	char getName();
	int getDistance();
	void setDistance(int dist);

private:
	std::vector<gr_node*> neighbors;
	int distance;
	char name;
	State state;
};

class Graph{
public:
	void addNode(char nm);
	std::unordered_map<char, gr_node*> getNodes();
	void resetStates();
	bool empty();
private:
	std::unordered_map<char, gr_node*> nodes;
};



#endif /* GRAPH_H_ */
