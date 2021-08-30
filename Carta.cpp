#include "Carta.h"
#include <iostream>
#include<string>
using namespace std;

string Carta::getCarta()
{
	string s = " - ";
	switch (value) {
	case 2:
		s = to_string(value);
		break;
	case 3:
		s = to_string(value);
		break;
	case 4:
		s = to_string(value);
		break;
	case 5:
		s = to_string(value);
		break;
	case 6:
		s = to_string(value);
		break;
	case 7:
		s = to_string(value);
		break;
	case 8:
		s = to_string(value);
		break;
	case 9:
		s = to_string(value);
		break;
	case 10:
		s = to_string(value);
		break;
	case 11:
		s = "Valet";
		break;
	case 12:
		s = "Dama";
		break;
	case 13:
		s = "Korol";
		break;
	case 14:
		s = "TUZ";
		break;
	}
	s += " ";
	switch (suit) {
	case 0:
		s += "Chervi";
		break;
	case 1:
		s += "Bubi";
		break;
	case 2:
		s += "Kresty";
		break;
	case 3:
		s += "Piki";
		break;
	}
	return s;
}



int Carta::getPoints()
{
	if (value >= 2 && value <= 10) {
		return value;
	}
	else if (value == 11) {
		return 2;
	}
	else if (value == 12) {
		return 3;
	}
	else if (value == 13) {
		return 4;
	}
	else return 11;
}

//Carta Carta::Flash()
//{
//	return Carta();
//}
