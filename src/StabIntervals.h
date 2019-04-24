/*
 * StabIntervals.h
 *
 *  Created on: Apr 12, 2019
 *      Author: Connor
 */

/*
 * Given a vector of pairs representing integer intervals on the real number line determine the set
 * containing the fewest points which "stabs" every interval. An interval is considered to be "stabbed"
 * by a point if that point is contained within the interval
 */

#include <utility>
#include <vector>
#include <stdexcept>

#ifndef STABINTERVALS_H_
#define STABINTERVALS_H_

std::vector<int> stabIntervals(std::vector<std::pair<int, int> > input);



#endif /* STABINTERVALS_H_ */
