/*
	Author: Jerzy Baran
*/

#ifndef DECK_HPP
#define DECK_HPP

#include <vector>

#include "Card.hpp"

using std::vector;

const int CARDS_52 = 0;
const int CARDS_26 = 1;

class Deck{

public:
	Deck(int type);

	Card drawCard();
	int getNumCardsInDeck();
	void shuffle();

private:

	int numCards = 0;
	vector<Card> cards;

	void addCard(int value, int suit);
};

#endif