/*
 * FizzBuzz.cpp
 *
 *  Created on: May 31, 2019
 *      Author: Connor
 */

#include "FizzBuzz.h"

void fizzBuzz(int n){
	if(n == 0){
		return;
	}
	int i = 1;

	while(i <= n){
		if(i % 3 == 0 && i % 5 == 0){
			std::cout << "FizzBuzz\n";
		}
		else if(i % 3 == 0){
			std::cout << "Fizz\n";
		}
		else if(i % 5 == 0){
			std::cout << "Buzz\n";
		}
		else{
			std::cout << i << "\n";
		}
		++i;
	}
}


