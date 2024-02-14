#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long x,a,b,c,d;
    cin>>a>>b>>c>>d;
    x=(a*b)-(c*d);
    cout<< "Difference = "<<x;
    return 0;
}

