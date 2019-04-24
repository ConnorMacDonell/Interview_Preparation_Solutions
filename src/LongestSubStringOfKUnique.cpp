/*
 * LongestSubStringOfKUnique.cpp
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include "LongestSubStringOfKUnique.h"

std::string kUnique(std::string str, int k){
	if(str.empty() || k == 0){
		return "";
	}
	int count = 0;
	int maxLen = 0;
	int currLen = 0;
	std::string result = "";
	std::unordered_map<char, int> charMap;
	std::string::iterator begin = str.begin();
	std::string::iterator end = str.begin();

	while(end != str.end()){
		if(charMap.find(*end) == charMap.end() || charMap[*end] == 0){
			++count;
			charMap[*end] = 1;
			if (count > k){
				if(currLen > maxLen){
					result = std::string(begin, end);
					maxLen = currLen;
				}
				while(charMap[*begin] > 0){
					charMap[*begin] -= 1;
					++begin;
					--currLen;
				}
				--count;
			}
		}
		else{
			charMap[*end] += 1;
		}
		++currLen;
		++end;
	}
	if(count == k){
		if(currLen > maxLen){
			result = std::string(begin, end);
		}
	}
	return result;

}


