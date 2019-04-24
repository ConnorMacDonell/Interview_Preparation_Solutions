/*
 * BinaryStringPrinter.h
 *
 *  Created on: Mar 16, 2019
 *      Author: Connor
 */

/*
 * Given a string of 1s, 0s, and ?s where a ? can represent either a 1 or a 0 print all possible strings
 * which could be constructed from the original string
 */

#include <string>
#include <vector>
#include <iostream>

#ifndef BINARYSTRINGPRINTER_H_
#define BINARYSTRINGPRINTER_H_

void printBString(std::string input);

void printBStringHelper(std::string input, int curr, std::string result);



#endif /* BINARYSTRINGPRINTER_H_ */
