#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int number1,number2 = 0;
    cin>>number1 ;
    for(int i = 1 ; i <= number1 ; i++)
    {
        for(int j = 1 ; j <= 3 ;j++)
        {
            cout<< ++number2 << " ";
        }
        number2++;
        cout<< "PUM\n";
    }
   return 0;
}
