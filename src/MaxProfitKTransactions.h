/*
 * MaxProfitKTransactions.h
 *
 *  Created on: May 4, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a vector of integers representing stock prices for a company in sequential order and an integer
 * k representing the number of transactions you are allowed, return the maximum profit which can be made
 * assuming you cannot buy and sell at the same price, that you may only one stock at any given time,
 * and that trades must be made in order
 */

#include <vector>
#include <cmath>

#ifndef MAXPROFITKTRANSACTIONS_H_
#define MAXPROFITKTRANSACTIONS_H_

int maxProfitKTransactions(std::vector<int> prices, int k);



#endif /* MAXPROFITKTRANSACTIONS_H_ */
