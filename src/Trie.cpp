/*
 * Trie.cpp
 *
 *  Created on: May 9, 2019
 *      Author: Connor
 */

#include "Trie.h"

void Trie::insert(std::string word){
	int i = 0;
	Trie* curr = this;
	while(curr -> children.find(word[i]) != curr -> children.end()){
		++i;
		curr = curr -> children[word[i]];
	}
	while(i < word.size()){
		Trie* node = new Trie;
		curr -> children[word[i]] = node;
		curr = curr -> children[word[i]];
		++i;
	}
	if(!(curr -> isWord)){
		curr -> isWord = true;
	}
}

bool Trie::inTrie(std::string word){
	int i = 0;
	Trie* curr = this;
	while(i < word.size()){
		if(curr -> children.find(word[i]) == curr -> children.end()){
			return false;
		}
		curr = curr -> children[word[i]];
		++i;
	}
	return curr -> isWord;
}


