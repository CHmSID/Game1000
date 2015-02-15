/*
	Author: Jerzy Baran
*/

#ifndef CARD_HPP
#define CARD_HPP

#include <string>

using std::string;

class Card{

public:
	Card(int value, int suit);
	void printCard();
	int getSuit();
	int getValue();
	string wordSuit();

private:
	int suit;
	int value;

	string intToString(int i);
};

#endif