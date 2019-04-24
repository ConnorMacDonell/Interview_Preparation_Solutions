/*
 * minStack.cpp
 *
 *  Created on: Mar 19, 2019
 *      Author: Connor
 */

#include "MinStack.h"

void minStack::push(int data){
	if(stack.empty() || data <= mins.top()){
		stack.push(data);
		mins.push(data);
		return;
	}
	stack.push(data);
}

void minStack::pop(){
	if(stack.empty()){
		std::cout << "Stack is empty.\n";
		return;
	}
	if(stack.top() == mins.top()){
		stack.pop();
		mins.pop();
		return;
	}
	stack.pop();
}

int minStack::top(){
	return stack.top();
}

int minStack::min(){
	return mins.top();
}

bool minStack::empty(){
	return stack.empty();
}


