/*
 * CelebrityParty.h
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

/*
 * Problem Description
 * Suppose you are at a party wherein guest A may know of guest B without guest B knowing of guest A.
 * Define a celebrity to be a guest known by all other guests but who knows no other guests.
 * Given a list of guests and the capability of asking a guest whether he or she knows a certain other
 * guest determine if there is a celebrity at the party with as few queries as possible.
 */

#include <vector>
#include <iostream>
#include <unordered_set>

#ifndef CELEBRITYPARTY_H_
#define CELEBRITYPARTY_H_

struct guest{
	int id;
	std::unordered_set<int> knownGuests;

};

bool knows(guest* guest1, guest* guest2);


bool celebrityParty(std::vector<guest> guestList);


#endif /* CELEBRITYPARTY_H_ */
