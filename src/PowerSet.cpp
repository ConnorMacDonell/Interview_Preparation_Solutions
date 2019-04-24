/*
 * PowerSet.cpp
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

#include "PowerSet.h"


 std::vector<std::vector<int> > powerSet(std::vector<int> input){
	 std::vector<std::vector<int> > powSet;
	if(input.empty()){
		return powSet;
	}
	std::vector<int> buffer;
	std::vector<bool> inBuffer;
	setToFalse(inBuffer, input.size());
	powerSetHelper(input, powSet, buffer, inBuffer);
	return powSet;

}

void powerSetHelper(std::vector<int> input, std::vector<std::vector<int> >& powSet,
		std::vector<int> buffer, std::vector<bool> inBuffer){
	if(!buffer.empty()){
		powSet.push_back(buffer);
	}
	if(buffer.size() == input.size()){
		return;
	}
	for(int i = 0; i < input.size(); ++i){
		if(!inBuffer[i]){
			buffer.push_back(input[i]);
			inBuffer[i] = true;
			powerSetHelper(input, powSet, buffer, inBuffer);
			inBuffer[i] = false;
			buffer.pop_back();
		}
	}
}

void setToFalse(std::vector<bool>& input, int size){
	for(int i = 0; i < size; ++i){
		input.push_back(false);
	}
	for(int i = 0; i < input.size(); ++i){
		std::cout << input[i] << " ";
	}
	std::cout << std::endl;
}


