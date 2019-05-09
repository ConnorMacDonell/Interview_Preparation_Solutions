/*
 * AlienLanguage.cpp
 *
 *  Created on: May 8, 2019
 *      Author: Connor
 */

#include "AlienLanguage.h"

std::vector<char> alienAlphabet(std::vector<std::string> dict){
	std::vector<std::pair<char, char> > rules = makeRules(dict);
	std::unordered_set<char> alienAlphabet;
	for(int i = 0; i < rules.size(); ++i){
		if(alienAlphabet.find(rules[i].first) == alienAlphabet.end()){
			alienAlphabet.insert(rules[i].first);
		}
		if(alienAlphabet.find(rules[i].second) == alienAlphabet.end()){
			alienAlphabet.insert(rules[i].second);
		}
	}

}

std::vector<std::pair<char, char> > makeRules(std::vector<std::string> dict){
	std::pair<char, char> rule;
	std::vector<std::pair<char, char> > result;


	for(int i = 0; i < dict.size() - 1; ++i){
		int j = 0;

		while(j < dict[i].size() && j < dict[i + 1].size() && dict[i][j] == dict[i + 1][j]){
			++j;
		}
		if(j != dict[i].size() && j != dict[i + 1].size()){
			rule.first = dict[i][j];
			rule.second = dict[i + 1][j];
			result.push_back(rule);
		}
	}
	return result;
}


