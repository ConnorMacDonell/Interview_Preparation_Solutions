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
#include "BT_BottomView.h"
#include "PrintCombs.h"
#include "AlienLanguage.h"
#include "BoggleSolver.h"
#include "StackBoxes.h"
#include "BuildLargest.h"
#include "SudokuSolver.h"
#include "LL_Split.h"


int main(){


	//LL_Split Test Case
	ll_node* head = newLLNode(0);
	head -> next = newLLNode(1);
	head -> next -> next = newLLNode(2);
	head -> next -> next -> next = newLLNode(3);
	head -> next -> next -> next -> next = newLLNode(4);
	head -> next -> next -> next -> next -> next = newLLNode(5);
	ll_node* curr = head -> next -> next -> next -> next -> next;
	curr -> next = newLLNode(6);

	std::pair<ll_node*, ll_node*> evenOdd = splitLL(head);

	ll_node* evenList = evenOdd.first;
	ll_node* oddList = evenOdd.second;

	std::cout << "Even list: ";
	while(evenList){
		std::cout << evenList -> data << " -> ";
		evenList = evenList -> next;
	}
	std::cout << "|" << std::endl;

	std::cout << "Odd list: ";
	while(oddList){
		std::cout << oddList -> data << " -> ";
		oddList = oddList -> next;
	}
	std::cout << "|" << std::endl;


	/*//Sudoku Solver Test Case
	std::vector<int> temp;
	std::vector<std::vector<int> > board;
	temp.push_back(5);
	temp.push_back(3);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(7);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	board.push_back(temp);
	temp.clear();

	temp.push_back(6);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(9);
	temp.push_back(5);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	board.push_back(temp);
	temp.clear();

	temp.push_back(0);
	temp.push_back(9);
	temp.push_back(8);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(6);
	temp.push_back(0);
	board.push_back(temp);
	temp.clear();

	temp.push_back(8);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(6);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(3);
	board.push_back(temp);
	temp.clear();

	temp.push_back(4);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(8);
	temp.push_back(0);
	temp.push_back(3);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(1);
	board.push_back(temp);
	temp.clear();

	temp.push_back(7);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(2);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(6);
	board.push_back(temp);
	temp.clear();

	temp.push_back(0);
	temp.push_back(6);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(2);
	temp.push_back(8);
	temp.push_back(0);
	board.push_back(temp);
	temp.clear();

	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(4);
	temp.push_back(1);
	temp.push_back(9);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(5);
	board.push_back(temp);
	temp.clear();

	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(8);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(7);
	temp.push_back(9);
	board.push_back(temp);
	temp.clear();

	sudokuSolver(board);*/


	/*//Build Largest Test Case
	std::vector<int> input;
	input.push_back(10);
	input.push_back(7);
	input.push_back(76);
	input.push_back(415);

	input = buildLargest(input);

	for(int i = 0; i < input.size(); ++i){
		std::cout << input[i];
	}*/





	/*//StackBoxes Test Case
	std::vector<int> box;
	std::vector<std::vector<int> > boxes;

	box.push_back(2);
	box.push_back(1);
	box.push_back(2);
	boxes.push_back(box);

	box[0] = 4;
	box[1] = 4;
	box[2] = 5;
	boxes.push_back(box);

	box[0] = 3;
	box[1] = 2;
	box[2] = 3;
	boxes.push_back(box);

	box[0] = 2;
	box[1] = 2;
	box[2] = 8;
	boxes.push_back(box);

	box[0] = 2;
	box[1] = 3;
	box[2] = 4;
	boxes.push_back(box);

	box[0] = 1;
	box[1] = 2;
	box[2] = 1;
	boxes.push_back(box);

	boxes = boxStacking(boxes);

	for(int i = 0; i < boxes.size(); ++i){
		for(int j = 0; j < boxes[0].size(); ++j){
			std::cout << boxes[i][j] << " ";
		}
		std::cout << " , ";
	}*/


	/*//Boggle Solver
	std::vector<char> temp;
	std::vector<std::vector<char> > board;
	temp.push_back('y');
	temp.push_back('g');
	temp.push_back('f');
	temp.push_back('y');
	temp.push_back('e');
	temp.push_back('i');
	board.push_back(temp);
	temp[0] = 'c';
	temp[1] = 'o';
	temp[2] = 'r';
	temp[3] = 'p';
	temp[4] = 'o';
	temp[5] = 'u';
	board.push_back(temp);
	temp[0] = 'j';
	temp[1] = 'u';
	temp[2] = 'z';
	temp[3] = 's';
	temp[4] = 'e';
	temp[5] = 'l';
	board.push_back(temp);
	temp[0] = 's';
	temp[1] = 'y';
	temp[2] = 'u';
	temp[3] = 'r';
	temp[4] = 'h';
	temp[5] = 'p';
	board.push_back(temp);
	temp[0] = 'e';
	temp[1] = 'a';
	temp[2] = 'e';
	temp[3] = 'g';
	temp[4] = 'n';
	temp[5] = 'd';
	board.push_back(temp);
	temp[0] = 'h';
	temp[1] = 'e';
	temp[2] = 'l';
	temp[3] = 's';
	temp[4] = 'a';
	temp[5] = 't';
	board.push_back(temp);

	std::vector<std::string> dict;
	dict.push_back("san");
	dict.push_back("sana");
	dict.push_back("at");
	dict.push_back("vomit");
	dict.push_back("yours");
	dict.push_back("help");
	dict.push_back("end");
	dict.push_back("been");
	dict.push_back("bed");
	dict.push_back("danger");
	dict.push_back("calm");
	dict.push_back("ok");
	dict.push_back("chaos");
	dict.push_back("complete");
	dict.push_back("rear");
	dict.push_back("going");
	dict.push_back("storm");
	dict.push_back("face");
	dict.push_back("epual");
	dict.push_back("dangerous");

	std::unordered_set<std::string> result = boggleSolver(board, dict);

	for(std::unordered_set<std::string>::iterator it = result.begin(); it != result.end(); ++it){
		std::cout << *it << ", ";
	}*/



	/*//PrintCombs Test Case
	std::vector<int> input;
	input.push_back(1);
	input.push_back(2);
	input.push_back(3);
	input.push_back(4);
	input.push_back(5);
	input.push_back(6);
	input.push_back(7);

	printCombs(input, 7);*/


	/*//BottomView Test Case
	bt_node* root = makeNode(5);
	root -> leftChild = makeNode(3);
	root -> leftChild -> leftChild = makeNode(1);
	root -> leftChild -> leftChild -> leftChild = makeNode(0);
	root -> leftChild -> rightChild = makeNode(4);
	root -> rightChild = makeNode(7);
	root -> rightChild -> rightChild = makeNode(9);
	root -> rightChild -> leftChild = makeNode(6);
	root -> rightChild -> rightChild -> leftChild = makeNode(8);

	std::vector<int> bottomViewVect = bottomView(root);

	for(int i = 0; i < bottomViewVect.size(); ++i){
		std::cout << bottomViewVect[i] << " ";
	}
	std::cout << std::endl;
	destroyTree(root);*/




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

