/*
 * CelebrityParty.cpp
 *
 *  Created on: Mar 15, 2019
 *      Author: Connor
 */

#include "CelebrityParty.h"

bool celebrityParty(std::vector<guest*> guestList){
	if(guestList.empty()){
		return false;
	}
	int i = 0;
	int j = guestList.size() - 1;

	while(i < j){
		if(knows(guestList[i], guestList[j])){
			++i;
		}
		else{
			--j;
		}
	}
	for(j = 0; j < guestList.size() - 1; ++j){
		if(j != i && (!knows(guestList[j], guestList[i]) || knows(guestList[j], guestList[i]))){
			return false;
		}
	}
	return true;
}

bool knows(guest* guest1, guest* guest2){
	if(guest1 -> knownGuests.find(guest2 -> id) != guest1 -> knownGuests.end()){
		return true;
	}
	return false;
}





