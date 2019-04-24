/*
 * minStack.h
 *
 *  Created on: Mar 19, 2019
 *      Author: Connor
 */

#include <stack>
#include <iostream>

#ifndef MINSTACK_H_
#define MINSTACK_H_

class minStack{
public:
	void push(int data);
	void pop();
	int top();
	int min();
	bool empty();
private:
	std::stack<int> stack;
	std::stack<int> mins;
};



#endif /* MINSTACK_H_ */
