/*
 * GrumpyOwner.cpp
 *
 *  Created on: Jun 24, 2019
 *      Author: Connor
 */

#include "GrumpyOwner.h"

int maxSatisfied(const std::vector<int>& customers, const std::vector<bool>& grumpy, int x) {
	if(customers.empty()){
		return 0;
	}
	if(customers.size() == x){
		return sumVect(customers);
	}

	std::vector<int> unsatisfied;
	for(int i = 0; i < customers.size(); ++i){
		if(grumpy[i] == 1){
			unsatisfied.push_back(customers[i]);
		}
		else{
			unsatisfied.push_back(0);
		}
	}
	int totalCustomers = sumVect(customers);
	int totalUnsatisfied = sumVect(unsatisfied);
	int saved = maxSubVect(unsatisfied, x);

	return totalCustomers - (totalUnsatisfied - saved);
}

int maxSubVect(const std::vector<int>& input, int n){
	int currSum = 0;
	int max = 0;
	std::queue<int> sumQ;
	int i = 0;

	while(i < n){
		currSum += input[i];
		sumQ.push(input[i]);
		++i;
	}

	max = currSum;

	while(i < input.size()){
		currSum -= sumQ.front();
		sumQ.pop();
		currSum += input[i];
		sumQ.push(input[i]);
		++i;

		max = currSum > max ? currSum : max;
	}
	return max;
}

int sumVect(const std::vector<int>& input){
	int sum = 0;
	for(int i = 0; i < input.size(); ++i){
    	sum += input[i];
	}
	return sum;
}





