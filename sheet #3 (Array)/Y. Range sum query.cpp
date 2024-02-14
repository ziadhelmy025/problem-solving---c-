#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    long long arr[100001],l,r,sum =0 ;
    int n,t;
    cin>>n>>t;
    arr[0]=0;
    for(int i =1 ; i <= n ; i++)
    {
        cin>> arr[i];
    }
    for(int i = 1 ; i <= n ;i++)
    {
        arr[i]+=arr[i-1];
    }
    for(int i = 1 ; i <= t ; i++)
    {
        cin>>l>>r;
        sum = arr[r] - arr[l-1];cout<<sum << endl;
    }
    return 0;
}
