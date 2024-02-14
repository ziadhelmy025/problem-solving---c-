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
    if(number1 > number4 || number2 < number3)
        cout<< "-1";
    else
        cout<< max(number1 , number3) << " " << min(number2 , number4);
}
