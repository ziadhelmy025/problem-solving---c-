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
    int a,b,c;
    cin>> a >> b >> c;
    if (a<=b && a<=c && b<=c)
    {
        cout<< a << endl << b << endl << c;
    }
    else if (a<=b && a<=c && c<=b)
    {
        cout<< a << endl << c << endl << b;
    }
    else if (b<=a && b<=c && a<=c)
    {
        cout<< b << endl << a << endl << c;
    }
    else if (b<=a && b<=c && c<=a)
    {
        cout<< b << endl << c << endl << a;
    }
    else if (c<=b && c<=a && b<=a)
    {
        cout<< c << endl << b << endl << a;
    }
    else if (c<=b && c<=a && a<=b)
    {
        cout<< c << endl << a << endl << b;
    }

    cout<<endl;

    cout<< endl << a << endl << b << endl <<c;
    return 0;
}

