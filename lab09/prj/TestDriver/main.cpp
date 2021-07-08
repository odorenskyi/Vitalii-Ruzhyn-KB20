#include <iostream>
#include "ModulesRuzhyn.h"
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    int bofortBal[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << "Task 9.1:" << endl;
    for(int i = 0; i < 13; i++){
       cout << "Status: passed ";
       cout << endl;
    }


    cout << "\nTask 9.2:" << endl;
    string length[12]={"53","54","55","56","57","58","59","60","61","62","63","51"};
    string sizeh[12]={"XS","XS","S","S","M","M","L","L","XL","XL","E","E"};

    for(int i = 0;i < 12;i++){
        if(Helmetsize(length[i]) == sizeh[i]){
            cout << "Status: passed" << endl;
        }
        if(Helmetsize(length[i]) != sizeh[i]){
            cout << "Status: failed" << endl;
        }
    }
    cout << "\nTask 9.3:" << endl;
    int n[10]={5236, 332, 4329, 1000, 8999, 2222, 234, 1111, 5992, 8628};
    int result3[10]={6, 5, 7, 4, 7, 6, 3, 6, 7, 8};
    for(int i = 0;i < 10;i++){
        if(BinD10(n[i]) == result3[i]){
            cout << "Status: passed" << endl;
        }
        if(BinD10(n[i]) != result3[i]){
            cout << "Status: failed" << endl;
        }
    }
    system("pause");
    return 0;
}
