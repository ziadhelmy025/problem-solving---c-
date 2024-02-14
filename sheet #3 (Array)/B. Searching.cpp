#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>> n;
    long long arr[100005];
    for(int i = 0 ; i < n ; i++)
    {
        cin>> arr[i];
    }
    int x;
    cin>> x;
    bool f = 1;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == x)
        {
            cout<< i;
            f = 0;
            break;
        }

    }
    if(f == 1)
    {
         cout<< "-1";
    }
    return 0;
}
