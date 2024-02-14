#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[109],t,n;
    bool f;
    cin>>t;
    for (int w = 0 ; w < t ; w ++)
    {
        int cnt=0;
        cin>>n;
        for(int i = 0 ; i < n ; i++)
            cin>>arr[i];
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i ; j < n ; j++)
            {
                if(j==i)
                    continue;
                for(int k = i; k < j ; k++)
                {
                    if(arr[k] > arr[k+1])
                    {
                        f = 0;
                        break;
                    }
                    else
                        f = 1;
                }
                if(f == 1)
                    cnt++;
            }
        }
        cout<< cnt + n << endl;
    }
    return 0;
}
