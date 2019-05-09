/*
 * BoggleSolver.cpp
 *
 *  Created on: May 9, 2019
 *      Author: Connor
 */

#include "BoggleSolver.h"


std::unordered_set<std::string> boggleSolver(const std::vector<std::vector<char> >& board,
		const std::vector<std::string>& dict){
	if(board.empty() || board[0].empty() || dict.empty()){
		throw std::invalid_argument("Bad inputs: boggleSolver");
	}

	Trie* dictTrie = buildTrie(dict);

	std::unordered_set<std::string> result;

	std::vector<std::vector<bool> > inCurr;
	setToFalseBog(inCurr, board.size(), board[0].size());

	std::string strSoFar = "";

	for(int row = 0; row < board.size(); ++row){
		for(int col = 0; col < board[0].size(); ++col){
			if(dictTrie -> children.find(board[row][col]) != dictTrie -> children.end()){
				strSoFar.push_back(board[row][col]);
				Trie* curr = dictTrie -> children[board[row][col]];
				bogDFS(board, curr, inCurr, result, strSoFar, row, col);
				inCurr[row][col] = false;
				strSoFar = "";
			}
		}
	}
	delete dictTrie;
	return result;
}

void bogDFS(const std::vector<std::vector<char> >& board, Trie* curr,
		std::vector<std::vector<bool> >& inCurr, std::unordered_set<std::string>& result,
		std::string& strSoFar, int row, int col){
	if(curr -> isWord && result.find(strSoFar) == result.end()){
		result.insert(strSoFar);
	}
	inCurr[row][col] = true;
	std::vector<std::pair<int, int> > neighbors = getNeighborsBog(row, col);
	for(int i = 0; i < neighbors.size(); ++i){
		int first = neighbors[i].first;
		int second = neighbors[i].second;
		if(!oobCheck(board, first, second) && !inCurr[first][second] &&
				curr -> children.find(board[first][second]) != curr -> children.end()){
			strSoFar.push_back(board[first][second]);
			Trie* temp = curr -> children[board[first][second]];
			bogDFS(board, temp, inCurr, result, strSoFar, first, second);
			strSoFar.pop_back();
			inCurr[first][second] = false;
		}
	}


}

Trie* buildTrie(const std::vector<std::string>& dict){
	Trie* dictTrie = new Trie;
	for(int i = 0; i < dict.size(); ++i){
		dictTrie -> insert(dict[i]);
	}

	return dictTrie;

}

std::vector<std::pair<int, int> > getNeighborsBog(int row, int col){
	std::vector<std::pair<int, int> > result;
	result.push_back(std::make_pair(row + 1, col));
	result.push_back(std::make_pair(row, col + 1));
	result.push_back(std::make_pair(row - 1, col));
	result.push_back(std::make_pair(row, col - 1));
	result.push_back(std::make_pair(row + 1, col + 1));
	result.push_back(std::make_pair(row - 1, col + 1));
	result.push_back(std::make_pair(row + 1, col - 1));
	result.push_back(std::make_pair(row - 1, col - 1));

	return result;
}

bool oobCheck(const std::vector<std::vector<char> >& board, int row, int col){
	if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size()){
		return true;
	}
	return false;
}

void setToFalseBog(std::vector<std::vector<bool> >& inCurr, int height, int len){
	std::vector<bool> temp;
	for(int i = 0; i < len; ++i){
		temp.push_back(false);
	}
	for(int i = 0; i < height; ++i){
		inCurr.push_back(temp);
	}
}


