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
    long long age; cin>>age;
    int year ,month ,day;
    year = age / 365;
    month = (age % 365) / 30;
    day = ((age % 365) % 30);
    cout<< year << " years" << endl << month << " months" << endl << day << " days";
    return 0;
}

