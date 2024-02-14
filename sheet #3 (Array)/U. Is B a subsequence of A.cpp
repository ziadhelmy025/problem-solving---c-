#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long long ar1[100001],ar2[100001],n,m,b = -1;
    bool t =1;
    cin>>n>>m;
    for(int i = 0 ; i < n ; i++)
        cin>>ar1[i];
    for(int i = 0 ; i < m ; i++)
        cin>> ar2[i];

    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(ar2[i] == ar1[j] && j > b)
            {
                b = j;
                t = 1;
                break;
            }
            else
                t = 0;
        }
        if(t == 0)
            break;
    }
    if(t == 1)
        cout<< "YES";
    else
        cout<< "NO";
    return 0;
}
