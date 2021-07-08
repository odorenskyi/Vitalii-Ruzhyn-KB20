#ifndef MODULESRUZHYN_H_INCLUDED
#define MODULESRUZHYN_H_INCLUDED
#include <cmath>
#include <iostream>
#include <cmath>
#include <iostream>
#include <cstring>
#include <fstream>
#include <ctime>
#include <bitset>
using namespace std;
float s_calculation(float x, float y, float z)
{
    const double P = 3.141592653589793;
    int S = log(abs(sin(z)))+ ((1.0/2.0 * pow(x,2) - sqrt(abs(pow(y + z, 2) - pow(x,5))))/(10 * P * pow(z,4)));
    S = int(S*100 + 0.5)/100.0;
    return S;
}
double wind_speed(double input){

    input = input * 1000;

    return input;
}
void bofort_actions(int bofortBal)
{
   /* while (bofortBal > 12 || bofortBal < 0){
        cout << "Введіть бал Бофорта(від 0 до 12): ";
        cin >> bofortBal;
    }*/

    switch(bofortBal) {
        case 0: cout << "Сила вітру: < 0.3 м/c. "; break;
        case 1: cout << "Сила вітру: 0.3 - 1.5 м/c."; break;
        case 2: cout << "Сила вітру: 1.6 — 9.4 м/c."; break;
        case 3: cout << "Сила вітру: 9.4 — 5.4 м/c."; break;
        case 4: cout << "Сила вітру: 5.5 -7.9 м/c."; break;
        case 5: cout << "Сила вітру: 8.0 — 10.7 м/c."; break;
        case 6: cout << "Сила вітру: 10.8 — 13.8 м/c."; break;
        case 7: cout << "Сила вітру: 13.9 — 17.1 м/c."; break;
        case 8: cout << "Сила вітру: 17.2 — 20.7 м/c."; break;
        case 9: cout << "Сила вітру: 20.8 — 24.4 м/c."; break;
        case 10: cout << "Сила вітру: 24.5 — 28.4 м/c."; break;
        case 11: cout << "Сила вітру: 28.5 — 32.6 м/c."; break;
        case 12: cout << "Сила вітру: >= 32.7 м/c."; break;
    }
}
std::string  Helmetsize(std::string length){
    std::string sizesh;
    int d = atoi(length.c_str());
    if (d == 53 || d == 54){
        sizesh = "XS";
        return sizesh;
    }
    if (d == 55 || d == 56){
        sizesh = "S";
        return sizesh;
    }
    if (d == 57 || d == 58){
        sizesh = "M";
        return sizesh;
    }
    if (d == 59 || d == 60){
        sizesh = "L";
        return sizesh;
    }
    if (d == 61 || d == 62){
        sizesh = "XL";
        return sizesh;
    }
    if(d > 62 || d < 53){
        sizesh = "E";
        return sizesh;
    }
}

int BinD10(int N){
    int result = 0;
    bool flag = false;
    for (int n=sizeof(int)*8-1; n>-1; n--)  {
        if((N>>n)&1)
            if(!flag) {
                flag = true;
            }
        if (flag){
            if((N>>10)&1){
                result += ((N>>n)&1)? 1 : 0;
            }else{
                result += ((N>>n)&1)? 0 : 1;
            }
        }
    }
    return result;
}
int zero_one_counter(int);
#endif // MODULESRUZHYN_H_INCLUDED
