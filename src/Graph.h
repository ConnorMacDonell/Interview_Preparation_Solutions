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

	enum state{
		UNVISITED,
		VISITING,
		VISITED
	};

class gr_node{
public:
	std::vector<gr_node> getNeighbors();
	void addEdge(gr_node node);
	std::string getName();
	state getState();
	void setState(state set);
	void setValue(int val);
	int getValue();
	gr_node(std::string name);
private:
	std::vector<gr_node> neighbors;
	std::string name;
	int value;
	state state;
};

class Graph{
public:
	void addNode(gr_node name);
	std::vector<gr_node> getNodes();
	void resetStates();
	bool empty();
private:
	std::vector<gr_node> nodes;
};



#endif /* GRAPH_H_ */
