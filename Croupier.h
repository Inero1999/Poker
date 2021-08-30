#pragma once
#include <iostream>
#include<string>
#include<vector>
#include"Carta.h"

class Croupier
{
private:
	vector<Carta>Deck;
public:

	Croupier();
	void showDeck();
	Carta getRandCarta();


};

