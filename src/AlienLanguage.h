/*
 * AlienLanguage.h
 *
 *  Created on: May 11, 2019
 *      Author: Connor
 */

/*
 * Suppose you come across a vector of strings representing properly ordered words in an alien language
 * return a vector of chars in the proper order of priority for said language
 */

#include <unordered_map>
#include <string>
#include <iostream>
#include <stack>
#include <utility>
#include <stdexcept>

#include "Graph.h"

#ifndef ALIENLANGUAGE_H_
#define ALIENLANGUAGE_H_

std::vector<char> orderChars(std::vector<std::string>& dict);

std::vector<std::pair<char, char> > makeRules(std::vector<std::string>& dict);

Graph makeGraph(std::vector<std::pair<char, char> >& rules);

void alDFS(gr_node* node, std::stack<char>& alphaStack);



#endif /* ALIENLANGUAGE_H_ */
