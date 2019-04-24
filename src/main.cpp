//============================================================================
// Name        : Interview_Preparation_Solutions.cpp
// Author      : Connor
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>

#include "LongestSubStringOfKUnique.h"
#include "BinaryStringPrinter.h"
#include "BT_Node.h"
#include "BT_FreqSubTreeSum.h"
#include "BT_SerializeVect.h"
#include "BT_SumPaths.h"
#include "JumpingNumbers.h"
#include "MinStack.h"
#include "PrintWords.h"
#include "CoinChange.h"
#include "LinkedList.h"
#include "LL_Pivot.h"
#include "LL_Pivot.h"
#include "LL_Add.h"
#include "LL_isPalindrome.h"
#include "MergeIntervals.h"
#include "MinimumPartitionDifference.h"
#include "MergeSort.h"
#include "PowerSet.h"
#include "RecursiveMultiply.h"
#include "PrintPerms.h"
#include "PrintParenPairs.h"
#include "EightQueens.h"
#include "WordBreak.h"
#include "LL_LoopDetection.h"
#include "ArrayIsRotation.h"
#include "RotateMatrix.h"
#include "MinStepsToExit.h"
#include "TripletSum.h"
#include "SmallestDifference.h"
#include "QuickSelect.h"
#include "FourNumberSum.h"
#include "MaxIncreasingSubsequenceSum.h"
#include "RiverSizes.h"
#include "CollatzSequence.h"


int main(){
	int longest = longestCollatz();

	std::cout << longest << std::endl;


	/*//RiverSizes Test Case
	std::vector<int> temp;
	std::vector<std::vector<int> > matrix;
	temp.push_back(1);
	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(0);
	temp.push_back(0);
	matrix.push_back(temp);
	temp[0] = 0;
	temp[1] = 0;
	temp[2] = 1;
	temp[3] = 0;
	temp[4] = 1;
	matrix.push_back(temp);
	temp[0] = 1;
	temp[1] = 0;
	temp[2] = 1;
	temp[3] = 0;
	temp[4] = 1;
	matrix.push_back(temp);
	temp[0] = 1;
	temp[1] = 0;
	temp[2] = 1;
	temp[3] = 1;
	temp[4] = 0;
	matrix.push_back(temp);

	temp = riverSizes(matrix);

	for(int i = 0; i < temp.size(); ++i){
		std::cout << temp[i] << " ";
	}*/




	/*//MaxIncreasingSubsequenceSum Test Case
	std::vector<int> array;
	array.push_back(10);
	array.push_back(70);
	array.push_back(20);
	array.push_back(30);
	array.push_back(50);
	array.push_back(11);
	array.push_back(30);

	std::vector<std::vector<int> > result = maxSumIncreasingSubsequence(array);

	printMatrix(result);*/






	/*//QuickSelect Test Case
	std::vector<int> array;
	array.push_back(8);
	array.push_back(5);
	array.push_back(2);
	array.push_back(9);
	array.push_back(7);
	array.push_back(6);
	array.push_back(3);

	int partitionIndex = partition(array, 5);

	for(int i = 0; i < array.size(); ++i){
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	std::cout << partitionIndex << std::endl;*/



	/*//SmallestDifference Test Case
	std::vector<int> arrayOne;
	std::vector<int> arrayTwo;
	arrayOne.push_back(-1);
	arrayOne.push_back(5);
	arrayOne.push_back(10);
	arrayOne.push_back(20);
	arrayOne.push_back(3);
	arrayTwo.push_back(26);
	arrayTwo.push_back(134);
	arrayTwo.push_back(135);
	arrayTwo.push_back(15);
	arrayTwo.push_back(17);
	std::vector<int> result = smallestDifference(arrayOne, arrayTwo);

	std::cout << result[0] << ", " << result[1];*/



	/*//TripletSum Test Case
	std::vector<int> array;
	array.push_back(12);
	array.push_back(3);
	array.push_back(1);
	array.push_back(2);
	array.push_back(-6);
	array.push_back(5);
	array.push_back(-8);
	array.push_back(6);

	std::vector<std::vector<int> > result = tripletSum(array, 0);

	printMatrix(result);*/



	/*//MinStepsToExit Test Case
	std::vector<int> temp;
	std::vector<std::vector<int> > matrix;
	temp.push_back(1);
	temp.push_back(1);
	temp.push_back(1);
	temp.push_back(1);
	temp.push_back(1);
	matrix.push_back(temp);
	temp[0] = 1;
	temp[1] = 0;
	temp[2] = 2;
	temp[3] = 0;
	temp[4] = 1;
	matrix.push_back(temp);
	temp[0] = 1;
	temp[1] = 0;
	temp[2] = 1;
	temp[3] = 0;
	temp[4] = 1;
	matrix.push_back(temp);
	temp[0] = 1;
	temp[1] = 0;
	temp[2] = 1;
	temp[3] = 1;
	temp[4] = 1;
	matrix.push_back(temp);
	temp[0] = 1;
	temp[1] = 1;
	temp[2] = 1;
	temp[3] = 1;
	temp[4] = 1;
	matrix.push_back(temp);

	int minSteps = minStepsToExit(matrix);

	std::cout << minSteps;*/



	/*//RotateMatrix Test Case
	std::vector<int> temp;
	std::vector<std::vector<int> > matrix;

	temp.push_back(1);
	temp.push_back(2);
	temp.push_back(3);
	matrix.push_back(temp);
	temp[0] = 4;
	temp[1] = 5;
	temp[2] = 6;
	matrix.push_back(temp);
	temp[0] = 7;
	temp[1] = 8;
	temp[2] = 9;
	matrix.push_back(temp);

	std::cout << "Original Matrix: \n";
	printMatrix(matrix);

	rotate90CounterClockwise(matrix);

	std::cout << "\nRotated Matrix: \n";
	printMatrix(matrix);*/

	/*//ArrayIsRotation Test Case
	std::vector<int> vect1;
	std::vector<int> vect2;

	for(int i = 0; i < 10; ++i){
		vect1.push_back(i);
		if(i >= 4){
			vect2.push_back(i);
		}
	}
	vect2.push_back(0);
	vect2.push_back(1);
	vect2.push_back(2);
	vect2.push_back(3);

	if(isRotation(vect2, vect1)){
		std::cout << "Rotation" << std::endl;
	}
	else{
		std::cout << "Not rotation" << std::endl;
	}*/


	/*//StartOfCycle Test Case
	ll_node* head = newLLNode(1);
	head -> next = newLLNode(2);
	head -> next -> next = newLLNode(3);
	head -> next -> next -> next = newLLNode(4);
	head -> next -> next -> next -> next = newLLNode(5);
	head -> next -> next -> next -> next = head -> next;

	ll_node* start = startOfCycle(head);*/




	/*//WordBreak Test Case
	std::unordered_set<std::string> dict;
	dict.insert("ab");
	dict.insert("abc");
	dict.insert("abcd");
	dict.insert("bcd");
	dict.insert("cd");
	dict.insert("d");

	std::string input = "abcde";

	bool canSep = canSeparate(input, dict);

	std::cout << canSep;*/



	/*//Eight Queens Test
	eightQueens();*/



	/*//PrintParenPairs Test Case
	printParenPairs(4);*/



	/*//PrintPerms Test Case
	printUniquePerms("aaabbc");*/



	/*//RecursiveMultiply Test Case
	int result = recursiveMultiply(22, 17);
	std::cout << result << std::endl;*/

	/*//PowerSet Test Case
	std::vector<int> input;
	input.push_back(2);
	input.push_back(3);
	input.push_back(5);

	std::vector<std::vector<int> > powSet;
	powSet = powerSet(input);
	std::cout << "{ ";
	for(int i = 0; i < powSet.size(); ++i){
		std::cout << "{ ";
		for(int j = 0; j < powSet[i].size(); ++j){
			std::cout << powSet[i][j] << " ";
		}
		std::cout << "}";
	}
	std::cout << " }" << std::endl;*/



	/*//BT_FreqSubTreeSum Test Case
	bt_node* root = makeNode(5);
	root -> leftChild = makeNode(2);
	root -> rightChild = makeNode(-5);

	int freqSum = freqSubTreeSum(root);
	std::cout << freqSum;
	destroyTree(root);*/



	/*//Binary String Printer Test Case
	printBString("1101?0??11?1");*/

	/*//Merge Sort Test Case
	std::vector<int> input;
	input.push_back(12);
	input.push_back(11);
	input.push_back(13);
	input.push_back(5);
	input.push_back(6);
	input.push_back(7);

	mergeSort(input);

	int size = input.size() - 1;
	for(int i = 0; i < size; ++i){
		std::cout << input[i] << ", ";
	}
	std::cout << input[size] << std::endl;*/



	/*//MergeIntervals Test Case
	std::vector<std::pair<int, int> > input;
	std::pair<int, int> pair = std::make_pair(1,3);
	input.push_back(pair);
	pair = std::make_pair(1,3);
	input.push_back(pair);
	pair = std::make_pair(3,5);
	input.push_back(pair);
	pair = std::make_pair(6,8);
	input.push_back(pair);
	pair = std::make_pair(7,9);
	input.push_back(pair);
	pair = std::make_pair(9,10);
	input.push_back(pair);
	pair = std::make_pair(10,11);
	input.push_back(pair);
	pair = std::make_pair(12,700);
	input.push_back(pair);

	input = mergeIntervals(input);

	int size = input.size();
	for(int i = 0; i < size - 1; ++i){
		std::cout << "(" << input[i].first << "," << input[i].second << ")" << " , ";
	}
	std::cout << "(" << input[size - 1].first << "," << input[size - 1].second << ")" << std::endl;*/

	/*//LL_IsPalindrome Test Case
	ll_node* head = newLLNode(1);
	head-> next = newLLNode(2);
	ll_node* temp = head -> next;
	temp -> next = newLLNode(3);
	temp = temp -> next;
	temp -> next = newLLNode(4);
	temp = temp -> next;
	temp -> next = newLLNode(4);
	temp = temp -> next;
	temp -> next = newLLNode(2);
	temp = temp -> next;
	temp -> next = newLLNode(1);

	temp = head;
	while(temp){
		std::cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	std::cout << "--|" << std::endl;

	bool result = isPalindrome(head);
	std::cout << result << std::endl;

	temp = head;
	while(temp){
		std::cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	std::cout << "--|" << std::endl;
	delete temp;
	destroyLL(head);*/


	/*//LL_Add Test Case
	ll_node* head1 = newLLNode(9);
	head1 -> next = newLLNode(7);
	head1 -> next -> next = newLLNode(8);

	ll_node* head2 = newLLNode(6);
	head2 -> next = newLLNode(8);
	head2 -> next -> next = newLLNode(5);

	ll_node* head3 = addLL(head1, head2);

	ll_node* temp = head3;
	while(temp){
		std::cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	std::cout << "--|" << std::endl;

	delete temp;
	destroyLL(head1);
	destroyLL(head2);
	destroyLL(head3);*/


	/*//LL_Pivot Test Case
	ll_node* head = newLLNode(7);
	head-> next = newLLNode(5);
	ll_node* temp = head -> next;
	temp -> next = newLLNode(8);
	temp = temp -> next;
	temp -> next = newLLNode(5);
	temp = temp -> next;
	temp -> next = newLLNode(10);
	temp = temp -> next;
	temp -> next = newLLNode(23);
	temp = temp -> next;
	temp -> next = newLLNode(15);

	temp = head;
	while(temp){
		std::cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	std::cout << "--|" << std::endl;

	head = pivot_ll(head, 5);
	temp = head;

	while(temp){
		std::cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	std::cout << "--|" << std::endl;
	delete temp;
	destroyLL(head);*/


	/*//Minimum Partition Difference Test Case
	std::vector<int> input;
	input.push_back(15);
	input.push_back(10);
	input.push_back(20);
	input.push_back(30);
	input.push_back(3);

	int difference = minPartDiff(input);
	std::cout << difference;*/


	//CoinChange Test Case
	/*std::vector<int> coins;
	coins.push_back(1);
	coins.push_back(2);
	coins.push_back(4);
	coins.push_back(5);
	coinChange(coins, 5);*/


	//PrintWords Test Case
	/*std::unordered_set<std::string> dict;
	dict.insert("i");
	dict.insert("like");
	dict.insert("man");
	dict.insert("go");
	dict.insert("tan");
	dict.insert("mango");
	dict.insert("tango");

	printWords("ilikemangotangop", dict);*/
	return 0;
}




/*std::vector<int> subarraySort(std::vector<int> array) {
	int start = INT_MIN;
	int end = INT_MIN;
	int unsortedMin = INT_MAX;
	int unsortedMax = INT_MIN;
	bool holdMin = false;
	bool holdMax = false;

  for(int i = 0; i < array.size() - 1; ++i){
		if(array[i] > array[i + 1]){
			start = i + 1;
			break;
		}
	}
	if(start == INT_MIN){
		return {-1, -1};
	}
	for(int i = array.size() - 1; i > 0; ++i){
		if(array[i - 1] > array[i]){
			end = i - 1;
			break;
		}
	}
	for(int i = 0; i <= end; ++i){
		unsortedMax = array[i] > unsortedMax ? array[i] : unsortedMax;
	}
	for(int i = array.size() - 1; i >= start; --i){
		unsortedMin = array[i] < unsortedMin ? array[i] : unsortedMin;
	}
	int left = 0;
	int right = 0;
	for(int i = 0; i < array.size(); ++i){
		if(array[i] > unsortedMin && !holdMin){
			left = i;
			holdMin = true;
		}
		if(array[i] > unsortedMax && !holdMax){
			right = i;
			holdMax = true;
		}
	}
	return {left, right};
}*/

int simpleHash(const std::string& str);
bool rabinKarp(const std::string& big, const std::string& small);
bool compareStrings(std::queue<char> window, const std::string& small);

std::vector<bool> multiStringSearch(std::string bigString,
															 std::vector<std::string> smallStrings) {
	if(bigString.empty() || smallStrings.empty()){
		throw std::invalid_argument("Invalid parameters: multiStringSearch");
	}

	std::vector<bool> result = {};

	for(int i = 0; i < smallStrings.size(); ++i){
		result.push_back(rabinKarp(bigString, smallStrings[i]));
	}

	return result;

}

int simpleHash(const std::string& str){
	int x = 53;
	int hash = 1;
	for(int i = 0; i < str.size(); ++i){
		hash = hash * x + str[i];
	}
	return hash;
}

bool rabinKarp(const std::string& big, const std::string& small){
	std::queue<char> window;
	std::string start = std::substr(big.begin(), small.size());
	int smallHash = simpleHash(small);
	int bigHash = simpleHash(start);

	for(int i = 0; i < small.size(); ++i){
		queue.push(big[i]);
	}

	for(int i = small.size(); i < big.size(); ++i){
		if(smallHash == bigHash){
			if(compareStrings(window, small)){
				return true;
			}
		}
		window.pop_front();
		window.push(big[i]);
		bigHash -= big[i - small.size()];
		bigHash += big[i];
	}

	if(smallHash == bigHash){
		if(compareStrings(window, small)){
			return true;
		}
	}
	return false;
}

bool compareStrings(std::queue<char> window, const std::string& small){
	for(int i = 0; i < small.size(); ++i){
		if(window.front() != small[i]){
			return false;
		}
		else{
			window.pop_front();
		}
	}
	return true;
}