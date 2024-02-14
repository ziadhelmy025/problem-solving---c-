#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y ,z,arr[101];
    cin>>x;
    for(int i = 0 ; i < x ; i++)
    {
        cin>> y ;
        for(int j = 0 ; j < y ; j++)
        {
            cin>> arr[j];
        }
        z = arr[0]+arr[1]+1-0;
        for(int l = 0 ; l < y-1 ; l++)
        {
            for(int k = l + 1 ; k < y ; k++)
            {
                z = min(z,arr[l]+arr[k]+k-l);
            }
        }
        cout<< z << endl;
    }
    return 0;
}
