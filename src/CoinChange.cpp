/*
 * CoinChange.cpp
 *
 *  Created on: Mar 28, 2019
 *      Author: Connor
 */

#include "CoinChange.h"


void coinChange(std::vector<int> coins, int target){
	if(coins.empty() || target <= 0){
		return;
	}
	std::stack<int> buffer;
	printCombos(coins, buffer, 0, 0, target);
}

void printCombos(std::vector<int> coins, std::stack<int> buffer, int sum, int index, int target){
	if(index >= coins.size() || sum > target){
		return;
	}
	if(sum == target){
		printStack(buffer);
		return;
	}
	int size = coins.size();
	for(int i = index; i < size; ++i){
		buffer.push(coins[i]);
		printCombos(coins, buffer, sum + coins[i], i, target);
		buffer.pop();
	}
}

void printStack(std::stack<int> toPrint){
	while(!toPrint.empty()){
		int temp = toPrint.top();
		std::cout << temp << " ";
		toPrint.pop();
	}
	std::cout << "\n";
}


