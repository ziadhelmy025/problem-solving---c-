#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int number;
     cin>> number;
     for(int i = 0 ; i < number ; i++)
     {
         for(int t = 0 ; t <= i ; t++)
         {
             cout<< "*";
         }
         cout<< endl;
     }
   return 0;
}
