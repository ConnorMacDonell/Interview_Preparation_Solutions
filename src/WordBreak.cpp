/*
 * WordBreak.cpp
 *
 *  Created on: Apr 11, 2019
 *      Author: Connor
 */

#include "WordBreak.h"

bool canSeparate(std::string input, std::unordered_set<std::string> dict){
    if(input.empty() || dict.empty()){
        return false;
    }
    int index = 0;
    std::string curr = "";
    return canSepHelper(input, dict, index, curr);
}

bool canSepHelper(std::string input, std::unordered_set<std::string> dict, int index, std::string curr){
	std::cout << "'" << curr << "'" << std::endl;
    if(index >= input.size()){
    	if(dict.find(curr) != dict.end() || curr == ""){
    		return true;
    	}
    	return false;
}
    curr.push_back(input[index]);
    if(dict.find(curr) != dict.end()){
    	if(canSepHelper(input, dict, index + 1, "")){
    		return true;
    	}
    }
    if(canSepHelper(input, dict, index + 1, curr)){
    	return true;
    }
    return false;
}

