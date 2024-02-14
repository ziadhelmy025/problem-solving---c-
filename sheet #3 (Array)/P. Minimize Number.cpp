#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , sum = 0 ;
    cin>> n;
    long long arr[300];
    bool f;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> arr[i];
    }
    while(true)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] % 2 == 0)
            {
                f = 1;
            }
            else
            {
                f = 0;
                break;
            }
        }
        if(f == 1)
        {
            for(int i = 0 ; i < n ; i++)
            {
                arr[i] /= 2;
            }
            sum++;
        }
        else
        {
            break;
        }
    }
    cout<< sum;
    return 0;
}
