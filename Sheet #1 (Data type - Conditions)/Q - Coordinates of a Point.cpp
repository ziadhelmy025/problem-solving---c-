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
    double X,Y; cin>>X>>Y;
    if(X > 0 && Y > 0)
        cout<< "Q1";
    else if(X < 0 && Y > 0)
        cout<< "Q2";
    else if(X < 0 && Y < 0)
        cout<< "Q3";
    else if(X > 0 && Y < 0)
        cout<< "Q4";
    else if(X == 0 && Y == 0)
        cout<< "Origem";
        else if(X == 0 && Y != 0)
        cout<< "Eixo Y";
        else if(X != 0 && Y == 0)
        cout<< "Eixo X";
    return 0;
}

