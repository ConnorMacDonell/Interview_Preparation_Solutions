/*
 * Graph.cpp
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include "Graph.h"

std::vector<gr_node*> gr_node::getNeighbors(){
	return neighbors;
}

void gr_node::addEdge(gr_node* node){
	neighbors.push_back(node);
}

State gr_node::getState(){
	return state;
}

void gr_node::setState(enum State set){
	state = set;
}

void gr_node::setValue(int val){
	value = val;
}

int gr_node::getValue(){
	return value;
}

int gr_node::getDistance(){
	return distance;
}

void gr_node::setDistance(int dist){
	distance = dist;
}



void Graph::addNode(int val){
	gr_node* node = new gr_node;
	node -> setValue(val);
	node -> setState(UNVISITED);
	node -> setDistance(10000000);
	nodes[val] = node;
}


std::unordered_map<int, gr_node*> Graph::getNodes(){
	return nodes;
}

void Graph::resetStates(){
	for(int i = 0; i < nodes.size(); ++i){
		nodes[i] -> setState(UNVISITED);
	}
}

bool Graph::empty(){
	if(nodes.empty()){
		return true;
	}
	return false;
}
