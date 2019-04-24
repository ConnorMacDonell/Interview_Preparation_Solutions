/*
 * CollatzSequence.cpp
 *
 *  Created on: Apr 22, 2019
 *      Author: Connor
 */

#include "CollatzSequence.h"

int longestCollatz(){
	long n = 0;
	int count = 0;
	int result = 0;
	std::vector<int> sequenceLengths;

	for(int i = 1; i < 1000000; ++i){
		n = i;
		count = 0;
		while(n != 1){
			if(n < 1){
				std::cout << "The conjecture is false!! " << i << std::endl;
				return i;
			}
			else if(n % 2 == 0){
				n = n/2;
			}
			else{
				n = 3*n + 1;
			}
			++count;
		}
		sequenceLengths.push_back(count);
	}
	int max = 0;
	for(int i = 0; i < sequenceLengths.size(); ++i){
		if(sequenceLengths[i] > max){
			max = sequenceLengths[i];
			result = i;
		}
	}
	std::cout << "Max sequence length: " << max << std::endl;
	return result;
}


