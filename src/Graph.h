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
	void setValue(int val);
	int getValue();
	int getDistance();
	void setDistance(int dist);

private:
	std::vector<gr_node*> neighbors;
	int distance;
	int value;
	State state;
};

class Graph{
public:
	void addNode(int value);
	std::unordered_map<int, gr_node*> getNodes();
	void resetStates();
	bool empty();
private:
	std::unordered_map<int, gr_node*> nodes;
};



#endif /* GRAPH_H_ */
