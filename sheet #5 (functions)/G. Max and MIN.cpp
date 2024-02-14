#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    long long arr[10000];
    int n;
    cin>>n;
    for(int i =0 ; i < n ; i++)
        cin>>arr[i];
    long long mn,mx;
    mn = *min_element(arr, arr + n);
    mx = *max_element(arr, arr + n);
    cout<<mn<< " " << mx;
    return 0;
}
