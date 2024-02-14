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
    bool f = 1;
    for(int i = 0 ; i < n ; i ++)
    {
        if(arr[i] != arr[(n-1)-i])
        {
            f = 0;
            break;
        }
    }
    if(f == 1)
        cout<< "YES";
    else
        cout<< "NO";
    return 0;
}
