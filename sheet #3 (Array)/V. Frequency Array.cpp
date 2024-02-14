#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long long ar1[100001],ar2[100001],n,m;
    cin>>n>>m;
    for(int i = 1 ; i <= n ; i++)
    {
        cin>>ar1[i];
        ar2[ar1[i]]++;
    }
    for(int i = 1 ; i <= m ; i++)
        cout<<ar2[i] << endl;
    return 0;
}
