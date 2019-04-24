/*
 * PrintPerms.h
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a string print all permutations of the string. Characters are not guaranteed to be unique and
 * no two printed permutations should look identical
 */

#include <unordered_map>
#include <string>
#include <iostream>

#ifndef PRINTPERMS_H_
#define PRINTPERMS_H_

void printUniquePerms(std::string input);

void printUniqueHelper(std::unordered_map<char, int> charCounts, int size, std::string curr);



#endif /* PRINTPERMS_H_ */
