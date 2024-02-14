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
    int minimum ,maximum , arr[5];
    for(int i = 0 ; i < 3 ; i++)
        cin>>arr[i];
    minimum =  *min_element(arr, arr + 3);
    maximum =  *max_element(arr,arr+3);
    cout<< minimum << " " << maximum;
    return 0;
}

