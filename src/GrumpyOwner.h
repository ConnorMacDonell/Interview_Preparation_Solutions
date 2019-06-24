/*
 * GrumpyOwner.h
 *
 *  Created on: Jun 24, 2019
 *      Author: Connor
 */

/*
 * A bookstore is open for customers.size() minutes a day. During each minute (i) customers[i] enter and
 * leave the shop. If the owner is not grumpy (grumpy[i] == 0) at that minute the customers leave
 * satisfied, however if the owner is grumpy (grumpt[i] == 1) the customers leave unsatisfied. The owner
 * can keep himsef from becoming grumpy for 0 < n <= customers.size() minutes in a row once a day.
 * Return the maximum number of customers which can me satisfied.
 */

#include <vector>
#include <queue>

#ifndef GRUMPYOWNER_H_
#define GRUMPYOWNER_H_

int maxSatisfied(const std::vector<int>& customers, const std::vector<bool>& grump, int n);

int sumVect(const std::vector<int>& input);

int maxSubVect(const std::vector<int>& input, int n);



#endif /* GRUMPYOWNER_H_ */
