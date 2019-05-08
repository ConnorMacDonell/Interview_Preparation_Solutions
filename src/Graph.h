/*
 * Graph.h
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include <vector>
#include <unordered_map>

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
	gr_node(std::string name) : name(name), value(0), state(UNVISITED) {}
	void setValue(int val);
	int getValue();
private:
	std::string name;
	std::vector<gr_node> neighbors;
	state state;
	int value;
};

class Graph{
public:
	void addNode(std::string name);
	std::unordered_map<std::string, gr_node> getNodes();
	void resetStates();
private:
	std::unordered_map<std::string, gr_node> nodes;
};



#endif /* GRAPH_H_ */
