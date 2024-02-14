#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sum, arr[100] , n,x = 0 , y = 1;
    arr[1] = 0; arr[2] = 1;
    for(int i = 3 ; i <= 60 ; i++)
    {
        sum = x + y;
        arr[i] = sum;
        x = y;
        y = sum;
    }
    cin>>n;
    cout<< arr[n];
    return 0;
}
