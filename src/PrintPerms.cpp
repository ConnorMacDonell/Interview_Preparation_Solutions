/*
 * PrintPerms.cpp
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

#include "PrintPerms.h"

void printUniquePerms(std::string input){
	if(input.empty()){
		return;
	}
	std::unordered_map<char, int> charCounts;
	for(int i = 0; i < input.size(); ++i){
		if(charCounts.find(input[i]) == charCounts.end()){
			charCounts[input[i]] = 1;
		}
		else{
			charCounts[input[i]] += 1;
		}
	}
	printUniqueHelper(charCounts, input.size(), "");
}

void printUniqueHelper(std::unordered_map<char, int> charCounts, int size, std::string curr){
	if(curr.size() >= size){
		std::cout << curr << "\n";
	}
	for(std::unordered_map<char, int>::iterator it = charCounts.begin(); it != charCounts.end(); ++it){
		if(it -> second > 0){
			it -> second -= 1;
			curr.push_back(it -> first);
			printUniqueHelper(charCounts, size, curr);
			curr.pop_back();
			it -> second += 1;
		}
	}
}
