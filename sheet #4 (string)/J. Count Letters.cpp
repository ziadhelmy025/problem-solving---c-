#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s ; int arr [27]={0}, sze;
    cin >> s;
    sze=s.size();
    for (int i=0 ; i<sze; i++)
    {
        arr[s[i]-'a']++;
    }
    for(int i=0; i<27; i++)
    {
        if (arr[i]>0)
            cout<< (char)(i+'a') << " : " << arr[i]<< endl;
    }
    return 0;
}
