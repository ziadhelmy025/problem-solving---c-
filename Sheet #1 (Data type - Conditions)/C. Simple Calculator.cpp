#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long summation=0,multiplication=1,subtraction=0,x,y;
    cin>>x>>y;
    summation = x + y;
    multiplication = x * y;
    subtraction = x - y;
    cout<< x << " + " << y<< " = " << summation << endl << x<< " * " <<y << " = " << multiplication << endl << x << " - "<<y << " = "<<subtraction;
    return 0;
}
