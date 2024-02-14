#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int t = n - 1 ; t >= i ; t--)
        {
            cout<< " ";
        }
        for(int t = 1 ; t <= i * 2 - 1 ; t++)
        {
            cout<< "*";
        }
        cout<< endl;
    }


    for(int i = n ; i >= 1 ; i--)
    {
        for(int t = 1 ; t <= i * 2 - 1 ; t++)
        {
            cout<< "*";
        }
        cout<< endl;
        for(int p = n - 1 ; p >= i-1 ; p--)
        {
            cout<< " ";
        }
    }
   return 0;
}
