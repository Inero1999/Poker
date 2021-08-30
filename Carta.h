#pragma once
#include <iostream>
#include<string>
using namespace std;

class Carta
{
private:
	int value;
	int suit;

public:
	Carta(int value, int suit) : value{ value }, suit{ suit }{};

	string getCarta();
	int getPoints();

	/*Carta Flash();*/



};

