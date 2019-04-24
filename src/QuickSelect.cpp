/*
 * QuickSelect.cpp
 *
 *  Created on: Apr 17, 2019
 *      Author: Connor
 */

#include "QuickSelect.h"


int quickselect(std::vector<int> array, int k) {
  int pivot = array[k - 1];

	int pivotIndex = partition(array, pivot);

	while(pivotIndex != k - 1){
		if(pivotIndex > k - 1){
			pivot = array[pivotIndex - 1];
		}
		else{
			pivot = array[pivotIndex + 1];
	}
		pivotIndex = partition(array, pivot);
	}
	return array[k - 1];
}

int partition(std::vector<int>& array, int pivot){
	int low = -1;
	int mid = -1;
	int high = array.size();

	while(mid + 1 < high){
		if(array[mid + 1] == pivot){
			++mid;
		}
		else if(array[mid + 1] > pivot){
			--high;
			std::swap(array[high], array[mid + 1]);
		}
		else{
			++mid;
			++low;
			std::swap(array[low], array[mid]);
		}
	}
	return mid + 1;
}




