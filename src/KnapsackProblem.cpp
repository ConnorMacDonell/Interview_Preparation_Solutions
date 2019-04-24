/*
 * KnapsackProblem.cpp
 *
 *  Created on: Mar 29, 2019
 *      Author: Connor
 */

#include <vector>
#include <string>
#include <algorithm>

long getPath(){
	return NULL;
}

 /*int maxRobbery(std::vector<std::pair<int, int> > items, int capacity){
 	if(capacity <= 0 || items.empty()){
  	return 0;
  }
  std::vector<std::vector<int> > memoVect;
  initializeWithMinusOne(memoVect);
  maxRobberyHelper(items, 0, 0, 0, memoVect);

  }
 }

 int maxRobberyHelper(std::vector<std::pair<int, int> > items, int capacity, int currValue, int index, std::vector<std::vector<int> > memoVect){
 	if(memoVect[capacity][value] != -1){
  	return memoVect[capacity][value];
  }
 	if(capacity < 0){
  	return 0;
  }

  int size = items.size();
  if(capacity == 0|| index == size - 1){
  	return currValue;
  }

  int result = max(maxRobberyHelper(items, capacity - items[index].second, currValue + items[index].first, index + 1, memoVect),
      						maxRobberyHelper(items, capacity, currValue, index + 1, memoVect));
  memoVect[capacity][value] = result;
  return result;
 }*/


