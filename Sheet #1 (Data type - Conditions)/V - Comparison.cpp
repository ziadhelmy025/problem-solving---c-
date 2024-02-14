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
    int number1 ,number2; string str; cin>> number1 >> str >> number2;
    if(str[0] == '>')
    {
        if(number1 > number2)
            cout<< "Right";
        else
            cout<< "Wrong";
    }
    if(str[0] == '<')
    {
        if(number1 < number2)
            cout<< "Right";
        else
            cout<< "Wrong";
    }
    if(str[0] == '=')
    {
        if(number1 == number2)
            cout<< "Right";
        else
            cout<< "Wrong";
    }
}
