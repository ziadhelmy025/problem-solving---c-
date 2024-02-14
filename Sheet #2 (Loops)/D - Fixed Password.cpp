#include <iostream>

using namespace std;

int main()
{
    int number;
    while(true)
    {
        cin>>number;
        if(number == 1999)
        {
            cout<< "Correct\n";
            break;
        }
        else{
          cout<< "Wrong\n";
          continue;
        }
    }
    return 0;
}
