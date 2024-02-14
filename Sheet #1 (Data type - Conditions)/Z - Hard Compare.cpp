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
    long long a,b,c,d;
    cin>> a >> b >>c >> d;
    if(b * log2(a) > d * log2(c))
        cout<< "YES";
    else
        cout<< "NO";
    return 0;

}
