#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    long long arr[100000];
    for(int j = 0 ; j < n ; j++)
    {
        cin>> arr[j];
    }
    int x,y;
    long long mn,mx;
    mn = *min_element(arr, arr + n);
    mx = *max_element(arr, arr + n);
    for(int j = 0 ; j < n ; j++)
    {
        if(arr[j] == mn)
        {
             x = j;
        }
        else if(arr[j] == mx)
        {
            y = j;
        }
    }
    for(int j = 0 ; j < n ; j++)
    {
        if(j == x)
            cout<< mx << " ";
        else if(j == y)
            cout<< mn << " ";
        else
            cout<< arr[j] << " " ;
    }
    return 0;
}
