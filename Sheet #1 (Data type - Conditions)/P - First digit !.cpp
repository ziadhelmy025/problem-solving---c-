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
    int number; cin>>number;
    number = number /1000;
    if( number % 2 == 0)
        cout<< "EVEN";
    else
        cout<< "ODD";
    return 0;
}

