/*
 * AlienLanguage.h
 *
 *  Created on: May 8, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Suppose you come across a dictionary of sorted words in an alien language, write a program to return
 * the order of characters in the language.
 */

#include <vector>
#include <string>
#include <utility>
#include <unordered_set>

#include "Graph.h"


#ifndef ALIENLANGUAGE_H_
#define ALIENLANGUAGE_H_

std::vector<char> alienAlphabet(std::vector<std::string> dict);

std::vector<std::pair<char, char> > makeRules(std::vector<std::string> dict);

Graph makeGraph(std::vector<std::pair<char, char> > rules, std::unordered_set<char> alienAlphabet);



#endif /* ALIENLANGUAGE_H_ */
