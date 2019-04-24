/*
 * BinaryStringPrinter.cpp
 *
 *  Created on: Mar 16, 2019
 *      Author: Connor
 */

#include "BinaryStringPrinter.h"

void printBString(std::string input){
	if(input.empty()){
		return;
	}
	printBStringHelper(input, 0, "");
}

void printBStringHelper(std::string input, int curr, std::string result){
	if(curr == input.size()){
		std::cout << result << std::endl;
		return;
	}
	if(input[curr] == '?'){
		printBStringHelper(input, curr + 1, result + '0');
		printBStringHelper(input, curr + 1, result + '1');
	}
	else{
		printBStringHelper(input, curr + 1, result + input[curr]);
	}
}


