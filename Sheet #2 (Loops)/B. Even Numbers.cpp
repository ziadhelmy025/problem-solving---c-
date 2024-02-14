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
    int number ; cin>> number;
    if(number  < 2)
        cout<< "-1";
    for(int i = 2 ; i <= number ; i+=2)
    {
        cout << i << endl;
    }
}
