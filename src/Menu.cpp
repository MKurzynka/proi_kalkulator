#include "Menu.h"
#include "Draw.h"
#include "Calculator.h"
#include "Operators.h"
#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

Menu::Menu(){operator_input = '+'; first_value = 0; second_value = 0;}
    void Menu::setOperator()
    {
        char provided_operator;
        do{
        cout << "Zdefiniuj operacje (+, -, *, /) lub wprowadz q, aby wyjsc" << endl;
        cin >> provided_operator;
        cin.ignore(INT32_MAX, '\n');
        cin.clear();
        if(provided_operator == 'q')
        {
            cout << "Do widzenia!" << endl;
            exit(0);
        }
        }while(static_cast<int>(provided_operator) != '+' && provided_operator != '-' && provided_operator != '*' && provided_operator != '/');
        operator_input = provided_operator;
    }
    void Menu::setValues()
    {
        cout << "Podaj pierwsza wartosc" << endl;
        cin >> first_value;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Podano zla wartosc, podaj wartosc jeszcze raz";
            cin >> first_value;
        }
        cout << "Podaj druga wartosc" << endl;
        cin >> second_value;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Podano zla wartosc, podaj wartosc jeszcze raz";
            cin >> second_value;
        }
    }
    void Menu::compute()
    {
        Draw draw(1);
        draw.drawNumber();
        int drawed_number = draw.getRandNumber();
        if(drawed_number % 2 == 1)
        {
            cout << "Losowa liczba" << endl;
            cout << static_cast<double>(drawed_number) << endl;
            //exit(0);
        }
        else
        {
            cout << "Wynik: " << endl;
            if(operator_input == '+')
            {
                Calculator calc(first_value);
                cout << calc + second_value << endl;
            }
            else if(operator_input == '-')
            {
                Calculator calc(first_value);
                cout << calc - second_value << endl;
            }
            else if(operator_input == '*')
            {
                Calculator calc(first_value);
                cout << calc * second_value << endl;
            }
            else
            {
                Calculator calc(first_value);
                cout << calc / second_value << endl;
            }
        }

    }

Menu::~Menu(){}
