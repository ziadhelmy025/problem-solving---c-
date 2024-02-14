#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int numer;
    cin>> numer;
    for(int i = 1 ; i <= numer ; i++)
    {
        for(int t = numer - 1 ; t >= i ; t--)
        {
            cout<< " ";
        }
        for(int t = 1 ; t <= i * 2 - 1 ; t++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
   return 0;
}
