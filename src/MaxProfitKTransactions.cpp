/*
 * MaxProfitKTransactions.cpp
 *
 *  Created on: May 4, 2019
 *      Author: Connor
 */

#include "MaxProfitKTransactions.h"


int maxProfitKTransactions(std::vector<int> prices, int k) {
	if(prices.size() == 0 || k == 0){
		return 0;
	}
	std::vector<std::vector<int> > profit(k + 1, std::vector<int>(prices.size(), 0));

	for(int transactions = 1; transactions < k + 1; ++transactions){
		int maxSoFar = INT_MIN;
		for(int day = 1; day < prices.size(); ++day){
			maxSoFar = std::max(profit[transactions - 1][day - 1] - prices[day - 1], maxSoFar);
			profit[transactions][day] = std::max(maxSoFar + prices[day], profit[transactions][day - 1]);
		}
	}
	return profit[k][prices.size() - 1];
}





