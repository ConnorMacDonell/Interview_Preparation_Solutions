/*
 * Graph.cpp
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include "Graph.h"

std::vector<gr_node> gr_node::getNeighbors(){
	return neighbors;
}

void gr_node::addEdge(gr_node node){
	neighbors.push_back(node);
}

std::string gr_node::getName(){
	return name;
}

state gr_node::getState(){
	return state;
}

void gr_node::setState(enum state set){
	state = set;
}

void gr_node::setValue(int val){
	value = val;
}

int gr_node::getValue(){
	return value;
}

gr_node::gr_node(std::string name) : name(name), value(0), state(UNVISITED) {}



void Graph::addNode(std::string name){
	gr_node temp = gr_node(name);
	nodes[name] = temp;
}


std::unordered_map<std::string, gr_node> Graph::getNodes(){
	return nodes;
}

void Graph::resetStates(){
	for(std::unordered_map<std::string, gr_node>::iterator it = nodes.begin(); it != nodes.end(); ++it){
		it -> second.setState(UNVISITED);
	}
}
