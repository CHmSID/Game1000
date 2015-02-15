#include <stdio.h>

#include "Deck.hpp"

int main(){

	Deck deck(CARDS_26);

	printf("Cards in deck: %i\n", deck.getNumCardsInDeck());
	Card c = deck.drawCard();
	printf("Removed: %s\n", c.wordSuit().c_str());
	printf("Cards in deck: %i\n", deck.getNumCardsInDeck());

    return 0;
}