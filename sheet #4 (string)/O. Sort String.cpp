#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    char x; int arr[27]={0}, n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        arr[x-'a']++;
    }
    for (int i=0; i<27; i++)
    {
        if (arr[i]>0)
            for (int j=0; j<arr[i]; j++)
                cout << (char)(i+'a');
    }
    return 0;
}
