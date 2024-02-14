#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
     string s; int sze, cnt=0, cnt1=0;
     cin >> s;
     sze=s.size();
     for (int i=0; i<sze; i++)
     {
         if (s[i]=='L')
            cnt++;
        else if (s[i]=='R')
            cnt --;
        if (cnt ==0)
            cnt1++;
     }
     cout << cnt1 << endl;
     for (int i=0; i<sze; i++)
     {
         cout << s[i];
         if (s[i]=='L')
            cnt++;
        else if (s[i]=='R')
            cnt --;
        if (cnt ==0)
            cout << endl;
     }
    return 0;
}
