/*
    Author: Jerzy Baran
*/

#include <string>

using std::string;

class Card{

public:
    Card(int value, int suit);
    void printCard();
    int getSuit();
    int getValue();

private:
    string wordSuit();
    int suit;
    int value;
};