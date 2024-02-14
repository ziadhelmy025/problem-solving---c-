#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x , y , z , t;
    cin>> x >> y;
    z = x * y;
    long long arr[100][100];
    for(int i = 0 ; i < x ; i++)
    {
        for( int j = 0 ; j < y ; j++)
        {
            cin>> arr[i][j];
        }
    }
    cin>> t;
    bool f = 0;
    for(int i = 0 ; i < x ; i++)
    {
        for( int j = 0 ; j < y ; j++)
        {
            if(arr[i][j] == t)
            {
                f = 1;
                break;
            }
        }
    }
    if(f == 1)
    {
        cout<< "will not take number";
    }
    else if(f == 0)
    {
        cout<< "will take number";
    }
    return 0;
}
