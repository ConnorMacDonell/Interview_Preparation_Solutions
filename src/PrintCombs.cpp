/*
 * PrintCombs.cpp
 *
 *  Created on: May 7, 2019
 *      Author: Connor
 */

#include "PrintCombs.h"

void printCombs(const std::vector<int>& input, int k){
	if(input.empty() || k == 0){
		return;
	}
	std::vector<int> buffer;
	printCombsHelper(input, buffer, 0, k);
}

void printCombsHelper(const std::vector<int>& input, std::vector<int> buffer, int index, int k){
	if(buffer.size() > k){
		return;
	}

	if(buffer.size() == k){
		printVect(buffer);
		return;
	}

	for(int i = index; i < input.size(); ++i){
		buffer.push_back(input[i]);
		printCombsHelper(input, buffer, i + 1, k);
		buffer.pop_back();
	}
}

void printVect(const std::vector<int>& input){
	for(int i = 0; i < input.size(); ++i){
		std::cout << input[i] << " ";
	}
	std::cout << std::endl;
}




