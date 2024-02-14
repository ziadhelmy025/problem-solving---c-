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
    string F1,F2,S1,S2;
    cin>>F1 >> S1 >> F2 >> S2;
    if(S1 == S2)
        cout<< "ARE Brothers";
    else
        cout<< "NOT";
    return 0;
}

