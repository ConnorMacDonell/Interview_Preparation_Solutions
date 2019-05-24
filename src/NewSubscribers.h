/*
 * NewSubscribers.h
 *
 *  Created on: May 24, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Given an array of length 24 where the value at each index represents the number of new subscribers at
 * the corresponding hour of the day. Assume that values are reset at the end of the day and queries
 * will not wrap around midnight, write a data structure to update values for an hour and to get the
 * (inclusive) sum of the values between two hours given as parameters
 */

#include <vector>

#ifndef NEWSUBSCRIBERS_H_
#define NEWSUBSCRIBERS_H_

class SubsByHour{
public:
	void reset();
	const int getSubs(int hour);
	void addSubs(int hour, int );
	SubsByHour();
private:
	std::vector<int> list;
};

class SubscriberList{
public:
	void update(int hour, int numSubs);
	const int chunkSum(int startHour, int endHour);
	SubscriberList(SubsByHour subList) : subList(subList) {}
private:
	SubsByHour subList;
};



#endif /* NEWSUBSCRIBERS_H_ */
