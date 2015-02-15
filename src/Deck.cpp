#include <vector>
#include <algorithm>	//random shuffle
#include <string>

#include "Deck.hpp"
#include "Card.hpp"

using std::vector;
using std::random_shuffle;
using std::string;

Deck::Deck(int type){

	int startingCard = 0;

	if(type == CARDS_52){

		//	for future expansion
	}
	else{

		startingCard = 7;
	}

	for(int i = startingCard; i <= 12; ++i){		// values

		for(int k = 0; k <= 3; ++k){			// suits

			addCard(i, k);
			numCards++;
		}
	}

	shuffle();
}

void Deck::addCard(int value, int suit){

	cards.push_back(Card(value, suit));	//push a card into deck
}

void Deck::shuffle(){

	random_shuffle(cards.begin(), cards.end());
}

int Deck::getNumCardsInDeck(){

	return numCards;
}

Card Deck::drawCard(){

	Card c = cards.at(cards.size() - 1);	//retrieve the last element
	cards.pop_back();	//destroy the last element
	numCards--;

	return c;
}