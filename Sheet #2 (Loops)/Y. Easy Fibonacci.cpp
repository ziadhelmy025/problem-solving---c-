#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x,y,z,w,g,sum;
    cin>> x;
    for(int i = 1 ; i <= x ; i++)
    {
    int n,sum,x = 0 , y = 1;
    cin>> n ;
    if(n==1)
        cout<< 0 << " ";
    else if(n==2)
        cout<< 0 << " " << 1 << " " ;
    else
    {
        cout<< 0 << " " << 1 << " " ;
        for(int i = 3 ; i <= n ; i++)
    {
        sum = x + y;
        cout<< sum << " ";
        x = y;
        y = sum;
    }
    }
   return 0;
}
