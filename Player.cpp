#include "Player.h"
#include <iostream>
#include<string>
#include<vector>
#include"Carta.h"
#include"Croupier.h"

using namespace std;





void Player::getCartPlayer(Carta carta)
{
	cartPlayer.push_back(carta);
}

void Player::showCartPlayer()
{
	for (int i = 0; i < cartPlayer.size(); i++) {
		cout << cartPlayer.at(i).getCarta()<< " - ";
	}
}




string Player::getNamePlayer()
{
	return name;
}

int Player::getMoneyPlayer()
{
	return money;
}


