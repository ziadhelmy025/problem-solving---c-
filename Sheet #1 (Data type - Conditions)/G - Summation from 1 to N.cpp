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
    long long number1,summation = 0;
    cin>>number1;
   summation =(number1 *  (number1 + 1) ) / 2;
    cout<< summation;
    return 0;
}

