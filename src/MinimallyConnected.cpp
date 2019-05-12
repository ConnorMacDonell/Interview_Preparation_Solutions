/*
 * MinimallyConnected.cpp
 *
 *  Created on: May 12, 2019
 *      Author: Connor
 */

#include "MinimallyConnected.h"


bool isMinimallyConnected(Graph& gr){
	if(gr.empty()){
		return true;
	}
	std::unordered_map<char, gr_node*> nodes = gr.getNodes();

	std::unordered_map<char, gr_node*>::iterator it = nodes.begin();

	if(!mcDFS(it -> second, NULL)){
		return false;
	}

	for(;it != nodes.end(); ++it){//if any node was not visited then the graph is not connected
		if(it -> second -> getState() != VISITED){
			return false;
		}
	}
	return true;
}

bool mcDFS(gr_node* node, gr_node* parent){

	node -> setState(VISITING);
	std::vector<gr_node*> neighbors = node -> getNeighbors();
	for(int i = 0; i < neighbors.size(); ++i){
		if(neighbors[i] -> getState() == VISITING){
			if(neighbors[i] != parent){//must be a cycle
				return false;
			}
		}
		if(neighbors[i] -> getState() == UNVISITED){
			if(!mcDFS(neighbors[i], node)){
				return false;
			}
		}
	}
	node -> setState(VISITED);
	return true;
}


