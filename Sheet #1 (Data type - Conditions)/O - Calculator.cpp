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
    int number1 ,number2 ,result; char str;
    cin>> number1 >> str >> number2;
    if(str =='+')
        result = number1 + number2;
    else if(str =='*')
        result = number1 * number2;
    else if(str =='-')
        result = number1 - number2;
    else if(str =='/')
        result = number1 / number2;
    cout<< result;
    return 0;
}

