/*
 * ScrambledSequence.h
 *
 *  Created on: Jun 11, 2019
 *      Author: Connor
 */

/*
 * Given an array of size N made of plus and minus symbols representing whether the element at index i
 * in the result should be greater(+) or less(-) than the element at index i - 1 and a null value for
 * element 0, return a sequence containing the numbers 0 to N which fits the pattern
 */

#include <vector>


#ifndef SCRAMBLEDSEQUENCE_H_
#define SCRAMBLEDSEQUENCE_H_

std::vector<int> scrambledSequence(const std::vector<char>& input);

int countMinus(const std::vector<char>& input);



#endif /* SCRAMBLEDSEQUENCE_H_ */
