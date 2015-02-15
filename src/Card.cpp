/*
	Author: Jerzy Baran
*/

#include <string>
#include <stdio.h>
#include <sstream>	//for int to string conversion

#include "Card.hpp"

using std::string;
using std::stringstream;

Card::Card(int value, int suit){

	this->value = value;
	this->suit = suit;
}

void Card::printCard(){

	printf("%i of %s", 
		getValue(), wordSuit().c_str());
}

int Card::getSuit(){

	return suit;
}

int Card::getValue(){

	return value;
}

string Card::wordSuit(){

	string number = "";
	string suit = "";

	switch(getValue()){

		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			// char* s = ;
			number = intToString(getValue() + 2);
			break;

		case 9:
			number = "Jack";
			break;

		case 10:
			number = "Queen";
			break;

		case 11:
			number = "King";
			break;

		case 12:
			number = "Ace";
			break;

		default:
			number = "UNKNOW-ERROR";
			break;
	}

	switch(getSuit()){

		case 0:
			suit = "Diamonds";
			break;

		case 1:
			suit = "Hearts";
			break;

		case 2:
			suit = "Spades";
			break;

		case 3:
			suit = "Clubs";
			break;

		default:
			suit = "UNKNOW-ERROR";
	}

	return (number + " of " + suit);
}

string Card::intToString(int i){

	stringstream out;
	out << i;
	return out.str();
}