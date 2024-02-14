#include <iostream>

using namespace std;

int main()
{
    int number ;
    bool test = 1;
    cin >> number ;
    if(number == 1 || number == 2 || number == 3)
    {
        cout<< "YES";
        return 0;
    }
    else
    {
        for(int i = 2 ; i <number ; i++)
        {
            if(number % i == 0)
            {
                test = 0;
                break;
            }
        }
    }
    if(test == 1)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }
    return 0 ;
}
