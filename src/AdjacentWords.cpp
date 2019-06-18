/*
 * AdjacentWords.cpp
 *
 *  Created on: Jun 17, 2019
 *      Author: Connor
 */

#include "AdjacentWords.h"

std::vector<std::string> adjacentWords(const std::vector<std::string>& dict, const std::string& target){
	if(dict.empty()){
		return dict;
	}
	std::vector<std::string> result;
	int targetSize = target.size();
	std::unordered_map<char, int> targetMap;

	for(int i = 0; i < targetSize; ++i){
		if(targetMap.find(target[i]) == targetMap.end()){
			targetMap[target[i]] = 1;
		}
		else{
			targetMap[target[i]] += 1;
		}
	}

	for(int i = 0; i < dict.size(); ++i){
		if(dict[i].size() == targetSize + 1 && isAnagram(dict[i], targetMap)){
			result.push_back(dict[i]);
		}
	}
	return result;
}

bool isAnagram(const std::string& word, std::unordered_map<char, int> targetMap){
	int missCount = 0;
	for(int i = 0; i < word.size(); ++i){
		if(targetMap.find(word[i]) != targetMap.end() && targetMap[word[i]] != 0){
			targetMap[word[i]] -= 1;
		}
		else{
			++missCount;
			if(missCount > 1){
				return false;
			}
		}
	}
	return true;
}


