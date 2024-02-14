#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[101] , t , m , mx;
    cin>> t;
    for(int k = 0 ; k < t ; k++)
    {
        cin>> m;
        for(int i = 0 ; i < m ; i++)
        {
            cin>> arr[i];
        }
        for(int start = 0 ; start < m ; start++)
        {
            for(int last = start ; last < m ; last++)
            {
                mx = INT_MIN;
                for(int j = start ; j <= last ; j++)
                {
                    if(arr[j] > mx)
                    {
                        mx = arr[j];
                    }
                }
                cout<< mx << " ";
            }
        }
        cout<< endl;
    }
    return 0;
}
