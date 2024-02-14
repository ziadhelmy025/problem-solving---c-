#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int number1;
cin>>number1;
int t = number1;
int rev = 0;
int reminder;
while(number1 != 0)
{
    reminder = number1 % 10;
    rev = rev * 10 + reminder;
    number1 = number1 / 10;
}
cout<<rev<<endl;
if(rev == t)
    cout<< "YES";
else
    cout<< "NO";
   return 0;
}
