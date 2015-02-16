/*
	Author: Mohammed Al Marhoon.
*/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include "Deck.hpp"
#include "Card.hpp"
using std::string;

class Player{

public:
	
	vector<Card> hand;
	void addCards(Deck &d);
};


#endif