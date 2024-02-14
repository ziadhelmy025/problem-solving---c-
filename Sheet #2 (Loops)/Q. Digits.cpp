#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
     cin>> n;
     for(int i = 0 ; i < n ; i++)
     {
         int x,v,r=0;
cin>>x;
if(x==0)
    cout<< 0;
while(x != 0)
{
    v = x % 10;
    //r = r * 10 + v;
    x = x / 10;
    cout<<v<< " ";
}

         cout<< endl;
     }
   return 0;
}
