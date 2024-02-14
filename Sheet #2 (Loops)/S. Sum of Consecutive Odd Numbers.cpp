#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int numer;
    cin>> numer;
    for(int i = 0 ; i < numer ; i++)
    {
        int num1 , num2;
        cin>> num1 >> num2;
        int mn ,mx;
        mn = min(num1,num2);
        mx = max(num1,num2);
         int sum = 0;
        for(int t = mn + 1 ; t < mx ; t++)
        {
            if(t % 2 != 0)
            {
                sum = sum + t;
            }
        }
        cout<< sum << endl;
    }
   return 0;
}
