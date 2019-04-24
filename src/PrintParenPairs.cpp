/*
 * PrintParenPairs.cpp
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

#include "PrintParenPairs.h"

void printParenPairs(int pairs){
	if(pairs <= 0){
		return;
	}
	int opens = pairs;
	int closes = 0;
	printParensHelp(opens, closes, "");
}

void printParensHelp(int opens, int closes, std::string result){
	if(opens == 0 && closes == 0){
		std::cout << result << "\n";
		return;
	}
	if(opens == 0){
		while(closes > 0){
			result.push_back(')');
			--closes;
		}
		std::cout << result << "\n";
		return;
	}
	result.push_back('(');
	printParensHelp(opens - 1, closes + 1, result);
	result.pop_back();
	if(closes > 0){
		result.push_back(')');
		printParensHelp(opens, closes - 1, result);
		result.pop_back();
	}

}



