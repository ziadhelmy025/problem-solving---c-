#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s,c, x;
    int i, t;
    cin >> t;
    while (t--)
    {
        cin>> s>>c;
        int a,b;
        a=s.size();
        b=c.size();
        if (b>=a)
        {
            for ( i=0; i<a; i++)
            {
                x+=s[i];
                x+=c[i];
            }
            for (int j=i; j<b; j++)
                x+=c[j];
        }
        else if (b<a)
        {
            for ( i=0; i<b; i++)
            {
                x+=s[i];
                x+=c[i];
            }
            for (int j=i; j<a; j++)
                x+=s[j];
        }

        cout << x << endl;
        x.clear();

    }


    return 0;
}
