FILES = src/Main.cpp src/Card.cpp src/Deck.cpp

compile:
	g++ $(FILES) -o game -std=c++11