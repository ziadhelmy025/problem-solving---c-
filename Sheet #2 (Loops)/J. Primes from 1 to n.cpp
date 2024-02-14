#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int number;
    cin>> number;
     for(int i = 2 ; i <= number ; i++)
     {
       bool f = 1;
       if(number == 2)
           {
               f = 1;
               cout<< i << " ";
               break;
           }
       for(int t = 2 ; t < i ; t++)
       {
           if(i % t == 0)
           {
               f = 0;
               break;
           }
       }
       if(f == 1)
        cout<< i << " ";
     }
   return 0;
}
