#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , sum = 0 ;
    cin>> n;
    long long arr1[1000] , arr2[1000];
    bool f;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr2[i];
    }
    sort(arr1 , arr1 + n);
    sort(arr2 , arr2 + n);
    for(int i = 0 ; i < n ; i++)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(arr1[i] == arr2[i])
            {
                f = 1;
            }
            else
            {
                f = 0;
                break;
            }
        }
    }
    if(f == 1)
    {
        cout<< "yes";
    }
    else
    {
        cout<< "no";
    }
    return 0;
}
