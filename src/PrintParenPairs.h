/*
 * PrintParenPairs.h
 *
 *  Created on: Apr 8, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given a number of pairs of parentheses print all valid representations of those pairs. A valid
 * representation is one in which no close paren comes before a corresponding open paren
 */

#include <string>
#include <iostream>

#ifndef PRINTPARENPAIRS_H_
#define PRINTPARENPAIRS_H_

void printParenPairs(int pairs);

void printParensHelp(int opens, int closes, std::string result);



#endif /* PRINTPARENPAIRS_H_ */
