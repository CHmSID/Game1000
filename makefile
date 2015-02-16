FILES = src/Main.cpp src/Card.cpp src/Deck.cpp src/Player.cpp

compile:
	g++ $(FILES) -o game -std=c++11