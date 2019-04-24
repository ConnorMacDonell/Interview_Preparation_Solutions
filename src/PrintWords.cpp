/*
 * PrintWords.cpp
 *
 *  Created on: Mar 27, 2019
 *      Author: Connor
 */

#include "PrintWords.h"

bool isWord(std::string input, std::unordered_set<std::string> dict){
	if(dict.find(input) != dict.end()){
		return true;
	}
	return false;
}

void printWords(std::string input, std::unordered_set<std::string> dict){
	if(input.empty()){
		return;
	}
	printWordsHelper(input, input.size(), "", dict);
}

void printWordsHelper(std::string input, int n, std::string result, std::unordered_set<std::string> dict){
	/*if(isWord(input, dict)){
		result += input;
		std::cout << result;
		std::cout << std::endl;
		return;
	}*/

	for(int i = 1; i <= n; ++i){
		std::string prefix = input.substr(0, i);
		if(isWord(prefix, dict)){
			if(i == n){
				result += prefix;
				std::cout << result << std::endl;
				return;
			}
			printWordsHelper(input.substr(i, n - i), n - i, result + prefix + " ", dict);
		}
	}
}
