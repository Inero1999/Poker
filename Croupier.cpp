#include "Croupier.h"
#include "Carta.h"
#include <iostream>
#include<string>
#include"Player.h"
using namespace std;

Croupier::Croupier()
{
    for (int i = 2;i <= 14;i++) {
        for (int j = 0;j < 4;j++) {
            Deck.push_back(Carta(i, j));
        }
    }
}
void Croupier::showDeck()
{
    for (int i = 0;i < Deck.size();i++) {
        cout << Deck.at(i).getCarta() << endl;
    }
}

Carta Croupier::getRandCarta()
{
    srand(time(0));
    int randomIndex = rand() % Deck.size();
    auto iter = Deck.begin();
    Carta temp = Deck[randomIndex];
    Deck.erase(iter + randomIndex);
    return temp;
}