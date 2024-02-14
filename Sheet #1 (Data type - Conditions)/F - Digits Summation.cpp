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
    long long number1,number2,sum = 0;
    cin>>number1>>number2;
    sum = (number1 %10) + (number2 % 10);
    cout<< sum;
    return 0;
}

