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
    float n,y;
    cin>> n;
    int x = n;
    y = n - x;
    if(y == 0)
        cout<< "int " << x;
    else
        cout<< "float " << x << " " << y ;
    return 0;
}
