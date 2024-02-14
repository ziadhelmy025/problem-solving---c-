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
    long long number1 ,number2 , number3; string str1 , str2; cin>> number1 >> str1 >> number2 >> str2 >> number3;
    if(str1[0] == '+')
    {
        if(number1 + number2 == number3)
            cout<< "Yes";
        else
            cout<< number1 + number2 ;
    }
    if(str1[0] == '-')
    {
        if(number1 - number2  == number3)
            cout<< "Yes";
        else
            cout<< number1 - number2;
    }
    if(str1[0] == '*')
    {
        if(number1 * number2 == number3)
            cout<< "Yes";
        else
            cout<< number1 * number2;
    }
}
