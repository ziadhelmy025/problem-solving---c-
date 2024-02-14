#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a,b;

    while(true)
    {
         cin>> a >> b;
         int mn,mx,sum = 0;
         mn = min(a,b);
         mx = max(a,b);
         if(a <= 0 || b <= 0)
            break;
         for(int i = mn ; i <= mx ; i++)
    {
        sum = sum + i;
        cout<< i << " ";
    }
    cout<< "sum =" << sum << endl;
    }
   return 0;
}
