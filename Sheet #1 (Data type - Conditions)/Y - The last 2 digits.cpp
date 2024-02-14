#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long number1, number2 ,number3 , number4 , Multiplication = 1;
    cin>> number1 >> number2  >> number3 >> number4;
    Multiplication = (number1 % 100* number2 % 100 * number3 %100 * number4 %100) % 100;
    if(Multiplication < 10)
        cout<< "0";
    cout<< Multiplication;
}
