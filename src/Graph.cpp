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

gr_node::gr_node(std::string nme) : name(nme), value(0), state(UNVISITED) {
	std::vector<gr_node> neighbors;
}



void Graph::addNode(gr_node node){
	nodes.push_back(node);
}


std::vector<gr_node> Graph::getNodes(){
	return nodes;
}

void Graph::resetStates(){
	for(int i = 0; i < nodes.size(); ++i){
		nodes[i].setState(UNVISITED);
	}
}

bool Graph::empty(){
	if(nodes.empty()){
		return true;
	}
	return false;
}
