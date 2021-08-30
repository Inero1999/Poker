// 14.07_Poker.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"Carta.h"
#include"Croupier.h"
#include"Player.h"
#include<vector>

using namespace std;

int main()
{
    enum VALUE
    {
        two = 2, three, four, five, six, seven, eight, nine, ten, valet, dama, korol, TUZ
    };
    enum SUIT
    {
        chervi = 0, bubi, kresty, piki
    };
    string name;
    int money;   
    int number;
    int numberCart;
    vector<Player>numberPlayer;

    
    Croupier deck;
    deck.showDeck();
    cout << endl << "------------------" << endl;

    cout << "Enter number players : ";
    cin >> number;
    if (number < 2 || number>8) {
        cout << "Error !!! Nomber players must be > 2 and < 9!!! ";
    }
    else {
        for (int i = 0; i < number;i++) {

            cout << "Enter name " << i + 1 << " player : " << endl;
            cin >> name;
            cout << "Enter money " << i + 1 << " player : " << endl;
            cin >> money;
            Player player(name, money);
            numberPlayer.push_back(player);

        }
        cout << endl << "------------------" << endl;

        cout << "Enter number cart for first move (reccomend 2) " ;
        cin >> numberCart;

            for (int i = 0; i < number;i++) {
                for (int j = 0;j < numberCart;j++) {
                    Carta carta = deck.getRandCarta();
                    numberPlayer.at(i).getCartPlayer(carta);
                }
            }

        for (int i = 0; i < number;i++) {

            cout << numberPlayer.at(i).getNamePlayer() << " - " << numberPlayer.at(i).getMoneyPlayer() << endl;
            numberPlayer.at(i).showCartPlayer();
            cout << endl << "------------------" << endl;


        }

        deck.showDeck();
    }


    
   
  





    



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
