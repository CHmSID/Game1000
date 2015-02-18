/*
	Author: Mohammed Al Marhoon.
*/

#include <iostream>
#include <stdio.h>
#include <vector>
#include "Deck.hpp"
#include "Card.hpp"
#include "Player.hpp"
//make an array for cards put card show them and take out card.



void Player::addCards(Deck &d){

	hand.push_back(d.drawCard());	
}

void Player::showCards(int i){
		Card c=hand.at(i);
		printf("%s\n",c.wordSuit().c_str());
}