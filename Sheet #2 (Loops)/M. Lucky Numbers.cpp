#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
     int a,b;
    cin>> a >> b;
    bool f = 1;
    for(int i = a; i <= b ; i++)
    {
        int x = i,z1=0,z2=0;
        while(x>0)
        {
            if(x % 10 == 7 || x % 10 == 4)
            {
                z1++;

            }
            z2++;
            x /= 10;
        }
        if(z1==z2)
        {
            cout<< i << " ";
            f = 0;
        }
    }
    if(f==1)
    {
         cout<< "-1";
    }
   return 0;
}
