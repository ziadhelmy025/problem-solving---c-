#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
long long powre(int x,int n)
{
    long long sum=0;
    if(x==0||n==0||n==1)
    {
        return 0;
    }
    else if(x==1)
    {
         for(int i =2; i<=n; i+=2)
         {
             sum++;
         }
         return sum;
    }
    else
    {
        for(int i =2; i<=n; i+=2)
        {
            sum = sum + pow(x,i);
        }
        return sum;
    }
}
int main()
{
    int x,n;
    cin>>x>>n;
    long long z = powre(x,n);
    cout<<z;
    return 0;
}
