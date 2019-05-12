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

void gr_node::setName(char nm){
	name = nm;
}

char gr_node::getName(){
	return name;
}

int gr_node::getDistance(){
	return distance;
}

void gr_node::setDistance(int dist){
	distance = dist;
}



void Graph::addNode(char nm){
	gr_node* node = new gr_node;
	node -> setName(nm);
	node -> setState(UNVISITED);
	node -> setDistance(0);
	nodes[nm] = node;
}


std::unordered_map<char, gr_node*> Graph::getNodes(){
	return nodes;
}

void Graph::resetStates(){
	for(std::unordered_map<char, gr_node*>::iterator it = nodes.begin(); it != nodes.end(); ++it){
		it -> second -> setState(UNVISITED);
	}
}

bool Graph::empty(){
	if(nodes.empty()){
		return true;
	}
	return false;
}
