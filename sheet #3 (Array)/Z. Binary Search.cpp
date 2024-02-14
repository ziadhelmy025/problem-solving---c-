#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    long long arr[100001],x;
    int n ,t;
    cin>>n >>t;
    for(int i = 0 ; i < n ; i++)
        cin>> arr[i];
    sort(arr,arr+n);
    for(int i = 0 ; i < t ;i++)
    {
        int st =0 , last = n-1 , mid;
        bool f =0 ; cin>>x;
        while(st <= last)
        {
            mid = (st+last)/2;
            if(arr[mid] == x)
            {
                f =1;
                break;
            }
            else if(arr[mid] > x)
                last = mid - 1;
            else
                st = mid +1;
        }
        if(f==1)
            cout<< "found\n";
        else
            cout<< "not found\n";
    }
    return 0;
}
