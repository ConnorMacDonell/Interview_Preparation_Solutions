/*
 * Trie.h
 *
 *  Created on: May 9, 2019
 *      Author: Connor
 */

#include <unordered_map>
#include <string>
#include <iostream>

#ifndef TRIE_H_
#define TRIE_H_

class Trie{
public:
	void insert(std::string word);
	bool inTrie(std::string word);
	bool isWord;
	std::unordered_map<char, Trie*> children;
};



#endif /* TRIE_H_ */
