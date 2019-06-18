/*
 * AdjacentWords.h
 *
 *  Created on: Jun 17, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * A word is considered adjacent to a target word if it can be made by adding one character to then
 * anagramming the target word. Given a dictionary and a target word return all adjacent words
 */

#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

#ifndef ADJACENTWORDS_H_
#define ADJACENTWORDS_H_

std::vector<std::string> adjacentWords(const std::vector<std::string>& dict, const std::string& target);

bool isAnagram(const std::string& word, std::unordered_map<char, int> targetMap);



#endif /* ADJACENTWORDS_H_ */
