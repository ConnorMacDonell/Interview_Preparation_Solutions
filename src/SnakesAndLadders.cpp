/*
 * SnakesAndLadders.cpp
 *
 *  Created on: May 11, 2019
 *      Author: Connor
 */

#include "SnakesAndLadders.h"

int snakesAndLadders(std::unordered_map<int, int>& snakes,
				std::unordered_map<int, int>& ladders){
	if(snakes.empty() || ladders.empty()){
		return -1;
	}
	Graph board = buildGraphSNL(snakes, ladders);

	std::unordered_map<int, gr_node*> nodes = board.getNodes();

	gr_node* node = nodes[0]; //Game starts from position 0
	node -> setDistance(0);
	std::queue<gr_node*> bfsQ;
	bfsQ.push(node);

	while(!bfsQ.empty()){
		node = bfsQ.front();
		bfsQ.pop();

		if(node -> getValue() == 100){//if we are at the destination, return
			return node -> getDistance();
		}
		int distance = node -> getDistance();

		std::vector<gr_node*> neighbors = node -> getNeighbors();

		for(int i = 0; i < neighbors.size(); ++i){
			if(neighbors[i] -> getState() != VISITED){//If we haven't checked this node before
				neighbors[i] -> setState(VISITED);//Mark as checked

				int dist = distance + 1;//Traveling to neighbors normally incurs a cost of one move

				if(neighbors.size() == 1){//If this node has only one neighbor it is either the base of
					//a ladder or the head of a snake and traveling to its neighbor incurs no cost
					--dist;
				}
				if(dist < neighbors[i] -> getDistance()){//If we have found a shorter path to this cell
					neighbors[i] -> setDistance(dist);//update to length of shorter path
				}
				bfsQ.push(neighbors[i]);
			}
		}
	}

	return nodes[100] -> getDistance();
}

Graph buildGraphSNL(std::unordered_map<int, int>& snakes,
		std::unordered_map<int, int>& ladders){
	Graph board;

	for(int i = 0; i <= 100; ++i){//add all cells
		board.addNode(i);
	}

	std::unordered_map<int, gr_node*> nodes = board.getNodes();

	for(int i = 0; i <= 100; ++i){
		if(snakes.find(i) != snakes.end()){//if head of snake add neighbor
			std::unordered_map<int, int>::iterator it = snakes.find(i);
			nodes[i] -> addEdge(nodes[it -> second]);
		}
		else if(ladders.find(i) != ladders.end()){//if base of ladder add neighbor
			std::unordered_map<int, int>::iterator it = ladders.find(i);
			nodes[i] -> addEdge(nodes[it -> second]);
		}
		else{//if neither add all neighbors
			for(int j = i + 1; j <= i + 6; ++j){
				if(j <= 100){
					nodes[i] -> addEdge(nodes[j]);
				}
			}
		}
	}

	return board;
}


