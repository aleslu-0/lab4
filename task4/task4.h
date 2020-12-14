#pragma once
#include <iostream>
#include <string>
using namespace std;

class Card {
public:
	string suit, ranks;
	string joker;
	Card() {
		suit = " ";
		ranks = " ";
		joker = " ";
	}
	Card(string j) {
		joker = j;
	}
	Card(string s, string r) {
		suit = s;
		ranks = r;
	}
	void print_C();
};

class CardDeck {
public:
	void print_D();
    Card *arr[55];
	CardDeck() {
		string suit;
		int place = 0;
		for (int s = 0; s < 4; s++) {
			if (s == 0) {
				suit = "Clubs";
			}
			else if (s == 1) {
				suit = "Diamonds";
			}
			else if (s == 2) {
				suit = "Hearts";
			}
			else if (s == 3) {
				suit = "Spades";
			}
			string rank;
			for (int i = 1; i < 14; i++) {
				rank = to_string(i);
				if (i == 1) {
					rank = "Ace";
				}
				else if (i == 11) {

					rank = "Jack";
				}
				else if (i == 12) {

					rank = "Queen";
				}
				else if (i == 13) {

					rank = "King";
				}
				arr[place] = new Card(suit, rank);
				place++;

			}
		}
		for (int j = 0; j < 3; j++) {
			arr[place] = new Card("Joker");
			place++;
		}
		
	}
	
};
