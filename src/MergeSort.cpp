/*
 * MergeSort.cpp
 *
 *  Created on: Apr 3, 2019
 *      Author: Connor
 */

#include "MergeSort.h"

void mergeSort(std::vector<int>& input){
	if(input.empty()){
		return;
	}
	std::cout << "Made it to mergeSort" << std::endl;
	int start = 0;
	int end = input.size() - 1;
	mergeSortHelper(input, start, end);
}

void mergeSortHelper(std::vector<int>& input, int start, int end){
	if(start >= end){
		return;
	}
	std::cout << "Made it to helper" << std::endl;
	int mid = start + (end - start)/2;

	mergeSortHelper(input, start, mid);
	mergeSortHelper(input, mid + 1, end);

	merge(input, start, end, mid);
}

void merge(std::vector<int>& input, int start, int end, int mid){
	std::vector<int> temp1;
	std::vector<int> temp2;

	for(int i = start; i <= mid; ++i){
		temp1.push_back(input[i]);
		std::cout <<"i = " << input[i];
	}
	std::cout << std::endl;
	for(int j = mid + 1; j <= end; ++j){
		temp2.push_back(input[j]);
		std::cout << "j = " << input[j];
	}
	std::cout << std::endl;

	int i = 0;
	int j = 0;
	int k = start;

	while(i < temp1.size() && j < temp2.size()){
		if(temp1[i] <= temp2[j]){
			input[k] = temp1[i];
			++i;
		}
		else{
			input[k] = temp2[j];
			++j;
		}
		++k;
	}
	while(i < temp1.size()){
		input[k] = temp1[i];
		++k;
		++i;
	}
	while(j < temp2.size()){
		input[k] = temp2[j];
		++k;
		++j;
	}
}


