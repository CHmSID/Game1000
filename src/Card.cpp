#include <string>
#include <stdio.h>

#include "Card.hpp"

using std::string;

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

    //TODO
    return "";
}