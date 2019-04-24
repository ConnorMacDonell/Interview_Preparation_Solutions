/*
 * PrintWords.h
 *
 *  Created on: Mar 27, 2019
 *      Author: Connor
 */

#include <string>
#include <unordered_set>
#include <iostream>


#ifndef PRINTWORDS_H_
#define PRINTWORDS_H_

bool isWord(std::string input, std::unordered_set<std::string> dict);

void printWords(std::string input, std::unordered_set<std::string> dict);

void printWordsHelper(std::string input, int n, std::string result, std::unordered_set<std::string> dict);



#endif /* PRINTWORDS_H_ */
