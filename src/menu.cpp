/*
	Author: Mohammed Al Marhoon.
*/

#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
	printf("\n\n\n%40s\n","Game of 1000");
	printf("%s\n%s\n%s\n\n","To start the game type: s",
			"To check the ranking of the cards type: r",
			"To quit type: q");
	char inPut;
	cin >> inPut;
	bool game=true;
	
	while(game){
		//start game.
		if(inPut=='s'||inPut=='S'){
			//start the game.
			cin>>inPut;
		}
		//ranking.
		else if(inPut=='r'||inPut=='R'){
			printf("%s\n%s","Ranking from high to low.\nAce	11 points\nTen 	10 points\nKing	4 points\nQueen 	3 points\nJack	2 points\nNine	0 points","clubs > spades > hearts > diamonds");
			printf("\n\n%s","King and Queen of Hearts		100 points\nKing and Queen of Diamonds		80 points\nKing and Queen of Clubs			60 points\nKing and Queen of Spades		40 points");
			printf("\n\n%s\n\n","type 's' to start game.You can come back to this screen by typing r.");
			cin>>inPut;
		}
		
		//quit game.
		else if(inPut=='q'||inPut=='Q'){
			game=false;
		}
	}
	
	return 0;
}