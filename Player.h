#pragma once
#include <iostream>
#include<string>
#include<vector>
#include"Carta.h"
#include"Croupier.h"
using namespace std;

class Player
{
private:
	string name;
	int money;
	int bet = 0;
	vector<Carta>cartPlayer;
public:
	
	
	Player(string name, int money) :name{ name }, money{ money }, bet{ bet } {};

	void getCartPlayer(Carta carta);

	void showCartPlayer();

	void showPlayer();

	string getNamePlayer();
	int getMoneyPlayer();


};

