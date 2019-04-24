/*
 * Graph.cpp
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include "Graph.h"

gr_node::gr_node(int data, std::vector<gr_node> neighbors) : data(data), neighbors(neighbors),
			state(UNVISITED) {}

std::vector<gr_node> gr_node::getNeighbors(){
	return this -> neighbors;
}

void gr_node::addNeighbor(gr_node node){
	this -> neighbors.push_back(node);
}

int gr_node::getData(){
	return this -> data;
}

void gr_node::setData(int n){
	this -> data = n;
}

state gr_node::getState(){
	return this -> state;
}

void gr_node::setState(enum state st){
	this -> state = st;
}


bool graph::empty(){
	return nodes.empty();
}

void graph::addNode(gr_node a){
	nodes.push_back(a);
}

std::vector<gr_node> graph::getNodes(){
	return this -> nodes;
}

graph::graph(std::vector<gr_node> nodes) : nodes(nodes) {}




