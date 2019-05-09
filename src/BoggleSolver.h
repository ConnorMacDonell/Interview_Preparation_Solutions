/*
 * BoggleSolver.h
 *
 *  Created on: May 9, 2019
 *      Author: Connor
 */

/*
 * Given a 2D graph representing a boggle board and a dictionary of valid words write a program to solve
 * the boggle board. That is, return a vector with
 */

#include <vector>
#include <iostream>
#include <stdexcept>
#include <utility>
#include <unordered_set>

#include "Trie.h"

#ifndef BOGGLESOLVER_H_
#define BOGGLESOLVER_H_

std::unordered_set<std::string> boggleSolver(const std::vector<std::vector<char> >& board,
		const std::vector<std::string>& dict);

Trie* buildTrie(const std::vector<std::string>& dict);

void bogDFS(const std::vector<std::vector<char> >& board, Trie* dictTrie,
		std::vector<std::vector<bool> >& inCurr, std::unordered_set<std::string>& result,
		std::string& strSoFar, int row, int col);

std::vector<std::pair<int, int> > getNeighborsBog(int row, int col);

bool oobCheck(const std::vector<std::vector<char> >& board, int row, int col);

void setToFalseBog(std::vector<std::vector<bool> >& inCurr, int height, int len);



#endif /* BOGGLESOLVER_H_ */
