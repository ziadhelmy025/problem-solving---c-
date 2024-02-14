#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int k,s,z,r = 0;
    cin>> k >> s;
    for(int j = 0 ; j <= k ; j++)
    {
        for(int i = 0 ; i <= k ;i++)
    {
        z = s - i - j;
        if(z >=0 && z <= k)
            r++;
    }
    }
    cout<< r;
   return 0;
}
