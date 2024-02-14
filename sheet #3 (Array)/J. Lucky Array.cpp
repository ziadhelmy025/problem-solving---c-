#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    long long sum = 0 , arr[1005];
    for(int i = 0 ; i < n ; i++)
    {
        cin>> arr[i];
    }
    int mn;
    mn = *min_element(arr, arr + n);
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == mn)
        {
            sum = sum + 1;
        }
    }
    if(sum % 2 == 0)
        cout<< "Unlucky";
    else
        cout<< "Lucky";
    return 0;
}
