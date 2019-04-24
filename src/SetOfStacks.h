/*
 * SetOfStacks.h
 *
 *  Created on: Apr 16, 2019
 *      Author: Connor
 */

/*
 * Implement a data structure which has a set of stacks and each time a stack reaches a certain capacity
 * a new stack is initialized. Push, pop, and top should return the same values as if there were only
 * one stack
 */

#include <stack>
#include <vector>
#include <stdexcept>

#ifndef SETOFSTACKS_H_
#define SETOFSTACKS_H_

class SetOfStacks{
public:
	void push(int n);
	void pop();
	int top();
	int topAtIndex(int index);
	void popAtIndex(int index);
	SetOfStacks(int n) : capacity(n) {}
private:
	std::stack<int> topStack;
	std::vector<std::stack<int> > stackVect;
	int capacity;
};



#endif /* SETOFSTACKS_H_ */
