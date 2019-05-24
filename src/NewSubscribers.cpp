/*
 * NewSubscribers.cpp
 *
 *  Created on: May 24, 2019
 *      Author: Connor
 */

#include "NewSubscribers.h"

void SubsByHour::reset(){
	for(int i = 0; i < 24; ++i){
		list[i] = 0;
	}
}

const int SubsByHour::getSubs(int hour){
	return list[hour];
}

void SubsByHour::addSubs(int hour, int subs){
	if(list[hour] + subs < subs){
		list[hour] = INT_MAX;
		return;
	}
	list[hour] += subs;
}

SubsByHour::SubsByHour(){
	for(int i = 0; i < 24; ++i){
		list[i] = 0;
	}
}

void SubscriberList::update(int hour, int newSubs){
	if(hour < 1 || hour > 24){
		return;
	}

	subList.addSubs(hour - 1, newSubs);
}

const int SubscriberList::chunkSum(int startHour, int endHour){
	if(startHour > endHour || startHour < 1 || endHour > 24){
		return -1;
	}
	int result = 0;
	int prevResult = 0;
	while(startHour <= endHour){
		prevResult = result;
		result += subList.getSubs(startHour - 1);
		if(prevResult > result){
			return INT_MAX;
		}
	}
	return result;
}


