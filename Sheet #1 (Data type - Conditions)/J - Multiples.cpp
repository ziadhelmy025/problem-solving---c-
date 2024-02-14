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
    int number1,number2;
    cin>>number1>>number2;
    if(number1 % number2 == 0 || number2 % number1 == 0)
        cout<< "Multiples";
    else
        cout<< "No Multiples";
    return 0;
}

