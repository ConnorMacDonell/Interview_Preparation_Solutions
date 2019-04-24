/*
 * SetOfStacks.cpp
 *
 *  Created on: Apr 16, 2019
 *      Author: Connor
 */

#include "SetOfStacks.h"



void SetOfStacks::push(int n){
	if(topStack.size() < capacity){
		topStack.push(n);
		return;
	}
	std::stack<int> newTop;
	stackVect.push_back(topStack);
	newTop.push(n);
	topStack = newTop;
}

void SetOfStacks::pop(){
	if(!topStack.empty()){
		topStack.pop();
		return;
	}
	if(stackVect.empty()){
		return;
	}
	topStack = stackVect[stackVect.size() - 1];
	topStack.pop();
	stackVect.pop_back();
}

int SetOfStacks::top(){
	if(!topStack.empty()){
		return topStack.top();
		}
	if(stackVect.empty()){
		throw std::out_of_range("SetOfStacks is empty.");
		}
	topStack = stackVect[stackVect.size() - 1];
	stackVect.pop_back();
	return topStack.top();
}

int SetOfStacks::topAtIndex(int index){
	if(index >= stackVect.size() || stackVect[index].empty()){
		throw std::out_of_range("No stack at that index.");
	}
	return stackVect[index].top();
}

void SetOfStacks::popAtIndex(int index){
	if(index >= stackVect.size() || stackVect[index].empty()){
		throw std::out_of_range("No stack at that index.");
	}
	stackVect[index].pop();
}


