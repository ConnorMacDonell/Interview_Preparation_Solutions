/*
 * SnakesAndLadders.h
 *
 *  Created on: May 11, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Snakes and ladders is played on a board consisting of 100 cells. The player throws a die numbered 1
 * to 6 and moves the corresponding number of spaces. There are also spaces associated with "snakes"
 * which transport the player to a lower cell and "ladders" which transport the player to a higher cell.
 * Given a snakes and ladders and perfect control over the outcome of the dice throw determine the
 * least number of turns to reach cell 100 from cell 0.
 */

#include <utility>
#include <unordered_map>
#include <iostream>
#include <queue>

#include "Graph.h"

#ifndef SNAKESANDLADDERS_H_
#define SNAKESANDLADDERS_H_

int snakesAndLadders(std::unordered_map<int, int>& snakes,
		std::unordered_map<int, int>& ladders);

Graph buildGraphSNL(std::unordered_map<int, int>& snakes,
		std::unordered_map<int, int>& ladders);

void snlDFS(gr_node* node, int distance);



#endif /* SNAKESANDLADDERS_H_ */
