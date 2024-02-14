#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int numer;
     cin>> numer;
     for(int i = 0 ; i < numer ; i++)
     {
         for(int t = numer ; t > i ; t--)
         {
             cout<< "*" ;
         }
         cout<< endl;
     }
   return 0;
}
