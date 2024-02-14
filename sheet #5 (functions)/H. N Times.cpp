#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int n,t;
    char s;
    cin>>t;
    for(int j = 0 ; j < t ; j++)
    {
        cin>>n >>s;
        for(int i = 0 ; i < n ; i++)
        {
            cout<< s << " " ;
        }
        cout<< endl;
    }
    return 0;
}
