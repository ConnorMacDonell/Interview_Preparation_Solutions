/*
 * JumpingNumbers.cpp
 *
 *  Created on: Mar 16, 2019
 *      Author: Connor
 */

#include "JumpingNumbers.h"

void printJumpingNumbers(int n){
	if(n == 0){
		std::cout << "0" << std::endl;
		return;
	}
	std::cout << "0" << std::endl;
	int curr = 1;
	std::queue<int> numQueue;
	while(curr < 10 && curr < n){
		numQueue.push(curr);
		++curr;
	}
	while(!numQueue.empty()){
		curr = numQueue.front();
		numQueue.pop();
		if(curr <= n){
			std::cout << curr << std::endl;
			int lastDigit = curr % 10;
			if(lastDigit == 0){
				numQueue.push(curr * 10 + lastDigit + 1);
			}
			else if(lastDigit == 9){
				numQueue.push(curr * 10 + lastDigit - 1);
			}
			else{
				numQueue.push(curr * 10 + lastDigit + 1);
				numQueue.push(curr * 10 + lastDigit - 1);
			}
		}
	}
}


