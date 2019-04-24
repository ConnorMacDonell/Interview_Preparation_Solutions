/*
 * WordBreak.h
 *
 *  Created on: Apr 11, 2019
 *      Author: Connor
 */

/*
 * Given a dictionary of strings and an input string determine whether the input can be broken into
 * valid dictionary words
 */

#include <string>
#include <unordered_set>
#include <iostream>


#ifndef WORDBREAK_H_
#define WORDBREAK_H_

bool canSeparate(std::string input, std::unordered_set<std::string> dict);

bool canSepHelper(std::string input, std::unordered_set<std::string> dict, int index, std::string curr);



#endif /* WORDBREAK_H_ */
