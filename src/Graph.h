/*
 * Graph.h
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include <vector>

#ifndef GRAPH_H_
#define GRAPH_H_

	enum state{UNVISITED, VISITING, VISITED};

class gr_node{
public:
	int getData();
	void setData(int n);
	state getState();
	void setState(state st);
	std::vector<gr_node> getNeighbors();
	void addNeighbor(gr_node node);
	gr_node(int data, std::vector<gr_node> neighbors);
private:
	int data;
	std::vector<gr_node> neighbors;
	state state;
};

class graph{
public:
	std::vector<gr_node> getNodes();
	void addNode(gr_node a);
	void delNode(gr_node a);
	bool empty();
	graph(std::vector<gr_node> nodes);
private:
	std::vector<gr_node> nodes;

};



#endif /* GRAPH_H_ */
