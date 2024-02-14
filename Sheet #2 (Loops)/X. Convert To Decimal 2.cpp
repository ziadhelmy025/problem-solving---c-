#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x,y,z,w,g,sum;
    cin>> x;
    for(int i = 1 ; i <= x ; i++)
    {
        cin>>y;
        sum=0; g = 0;
        z = y; w = y;
        while(true)
        {
            if(z % 2 != 0)
            {
                sum += pow(2,g);
                g++;
            }
            else if(z / 2 == 0)
            {
                break;
            }
            z /= 2;
        }
        cout<< sum << endl;
    }
   return 0;
}
