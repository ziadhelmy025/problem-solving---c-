#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    char X; cin>> X ;
    int Y = (int)X;
    if(Y >= 97 )
        cout<< "ALPHA" << endl << "IS SMALL";
    else if(Y >= 65 && Y <= 96)
        cout<< "ALPHA" << endl << "IS CAPITAL";
    else
        cout<< "IS DIGIT";
    return 0;
}

