#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum = 0;
    cin>> n;
    long long arr[100005];
    for(int i = 0 ; i < n ; i++)
    {
        cin>> arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        sum = sum + arr[i];

    }
    if(sum < 0 )
    {
         sum *= -1;
    }
    cout<< sum;
    return 0;
}
