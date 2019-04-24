/*
 * CoinChange.h
 *
 *  Created on: Mar 28, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a vector of unique positive integers representing coin denominations and an integer target
 * print every way to reach the target using any number of each coin
 */

#include <vector>
#include <iostream>
#include <stack>

#ifndef COINCHANGE_H_
#define COINCHANGE_H_

void coinChange(std::vector<int> coins, int target);

void printCombos(std::vector<int> coins, std::stack<int> buffer, int sum, int index, int target);

void printStack(std::stack<int>);



#endif /* COINCHANGE_H_ */
