/*
 * MinRewards.h
 *
 *  Created on: May 7, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Imagine you are a teacher who has finished grading students' tests and you want to distribute rewards
 * to the students based on their scores. If the students' scores are represented by unique integers in
 * an array in some order (not necessarily sorted), following the rules that each student must receive at
 * least 1 reward, and each student must receive strictly more rewards than any student with an adjacent
 * and lower score determine the minimum number of rewards which can be distributed.
 */

#include <vector>

#ifndef MINREWARDS_H_
#define MINREWARDS_H_

int minRewards(std::vector<int> scores);



#endif /* MINREWARDS_H_ */
