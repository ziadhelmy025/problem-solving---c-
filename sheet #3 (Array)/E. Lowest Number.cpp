#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>> n;
    long long arr[100005];

    for(int i = 1 ; i < n ; i++)
    {
        cin>> arr[i];
    }
    int mn = 100005,t;
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] < mn)
        {
            mn=arr[i];
            t = i;
        }
    }
    cout<< mn << " " << t;
    return 0;
}
