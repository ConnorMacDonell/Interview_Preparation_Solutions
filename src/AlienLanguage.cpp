/*
 * AlienLanguage.cpp
 *
 *  Created on: May 11, 2019
 *      Author: Connor
 */

#include "AlienLanguage.h"

std::vector<char> orderChars(std::vector<std::string>& dict){
	if(dict.empty()){
		throw std::invalid_argument("Dict is empty: orderChars");
	}

	std::vector<std::pair<char, char> > rules = makeRules(dict);

	Graph alphaGraph = makeGraph(rules);

	std::unordered_map<char, gr_node*> nodes = alphaGraph.getNodes();
	std::stack<char> alphaStack;

	for(std::unordered_map<char, gr_node*>::iterator it = nodes.begin(); it != nodes.end(); ++it){
		gr_node* node = it -> second;
		if(node -> getState() == UNVISITED){
			alDFS(node, alphaStack);
		}
	}

	std::vector<char> result;
	while(!alphaStack.empty()){
		result.push_back(alphaStack.top());
		alphaStack.pop();
	}
	return result;
}

void alDFS(gr_node* node, std::stack<char>& alphaStack){
	std::vector<gr_node*> neighbors = node -> getNeighbors();

	node -> setState(VISITING);
	for(int i = 0; i < neighbors.size(); ++i){
		if(neighbors[i] -> getState() == UNVISITED){
			alDFS(neighbors[i], alphaStack);
		}
	}
	node -> setState(VISITED);
	alphaStack.push(node -> getName());
}

std::vector<std::pair<char, char> > makeRules(std::vector<std::string>& dict){

	std::vector<std::pair<char, char> > rules;

	for(int i = 0; i < dict.size() - 1; ++i){
		int j = 0;
		while(dict[i][j] == dict[i + 1][j]){
			++j;
		}

		rules.push_back(std::make_pair(dict[i][j], dict[i + 1][j]));
	}
	return rules;
}

Graph makeGraph(std::vector<std::pair<char, char> >& rules){

	Graph alphaGraph;

	for(int i = 0; i < rules.size(); ++i){
		if(alphaGraph.getNodes().find(rules[i].first) == alphaGraph.getNodes().end()){
			alphaGraph.addNode(rules[i].first);
		}
		if(alphaGraph.getNodes().find(rules[i].second) == alphaGraph.getNodes().end()){
			alphaGraph.addNode(rules[i].second);
		}
	}

	std::unordered_map<char, gr_node*> nodes = alphaGraph.getNodes();

	for(int i = 0; i < rules.size(); ++i){
		char first = rules[i].first;
		char second = rules[i].second;

		nodes[first] -> addEdge(nodes[second]);
	}
	return alphaGraph;

}


