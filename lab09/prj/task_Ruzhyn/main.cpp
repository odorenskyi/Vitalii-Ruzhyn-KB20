#include <iostream>
#include "ModulesRuzhyn.h"
#include <clocale>
#include <windows.h>
#include <stdio.h>
#include <string>

using namespace std;
void dev_information()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    cout << ("\n------------------------------------\n"
           "|        Ruzhyn Vitaliy, CNTU         |\n"
           "|        Ружин Віталій, ЦНТУ        |"
           "\n------ (c) All Rights Reserved -----\n\n");
}

int main()
{
    int  length;
    char input = ' ';
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    dev_information();
    cout << "Введiть '7' для виклику s_calculation.  " << endl;
    cout << "Введiть '5' для виклику функцiї задачi 9.1.  " << endl;
    cout <<  "Введiть '4' для виклику функцiї задачi 9.2.  " << endl;
    cout << "Введiть '3' для виклику функцiї задачi 9.3.  " << endl;
    cout << "Введiть 't', 'T' або 'C' для виходу з програми." << endl;
    while(true){
        cout << "Введiть ключ: ";
        cin >> input;
        if(input == '7'){
    int x, y, z;
    float S;
    cout << "Введiть значення x: ";
    cin >> x;
            cout << "Введiть значення y: ";
        cin >> y;
    cout << "Введiть значення z: ";
    cin >> z;
    do {

        if (y==0){
            cout << "y не повинен дорiвнювати нулю.Введiть значення y:";
        }
    } while(y==0);
    const double P = 3.141592653589793;
    S = log(abs(sin(z)))+ ((1.0/2.0 * pow(x,2) - sqrt(abs(pow(y + z, 2) - pow(x,5))))/(10 * P * pow(z,4)));
    S = int(S*100 + 0.5)/100.0;
            cout << "\nS = " << S << endl;
        }else if(input == '5'){
              cout << "Введiть бал Бофорта( вiд 0 до 12): ";
              int bofortBal;
              cin >> bofortBal;
                  while (bofortBal > 12 || bofortBal < 0)
                  {
                      cout << "Не вiрне значення(бал Бофорта має бути вiд 0 до 12) " << endl;
                      cout << "Введiть бал Бофорта(вiд 0 до 12): ";
                      cin >> bofortBal;
                  }
              bofort_actions(bofortBal);
              cout << endl;
        }else if(input == '4'){
            cout << "\nВведiть довжину обхвату голови у сантиметрах(53-62): ";
            cin >> length;
            do{
                if(length < 53 || length > 62){
                    cout << "Некоректно введене значення, обхвату голови не може бути бiльшим за 62 та меншим за 53";
                    cout << "\nВведiть довжину обхвату голови у сантиметрах(53-62): ";
                    cin >> length;
                }
            }while (length < 53 || length > 62);
            std::string s = std::to_string(length);
            cout << "\nРозмiр шолому = " << Helmetsize(s) << endl << endl;
        }else if(input == '3'){
                int n = 0;
                cout << "\nВведiть цiле число вiд 0 до 8999:";
                cin >> n;
            do{
                if(n < 0 || n > 8999){
                    cout << "Некоректно введенi данi, N має бути не бiльше нiж 8999 та меншим нiж 0" << endl;
                    cout << "\nВведiть цiле число вiд 0 до 8999: ";
                    cin >> n;
                }
            }while (n < 0 || n > 8999);
            if((n>>10)&1){
                cout << "Кiлькiсть двiйкових нулів = " << BinD10(n) << endl << endl;
            }else{
                cout << "Кiлькiсть двiйкових одиниць =" << BinD10(n) << endl << endl;
            }

        }else if(input == 't' || input == 'T' || input == 'C'){
            break;
        }else {
            cout << "Невiрно введений ключ. \a" << endl;
        }
    }
    system("pause");

    return 0;
}
