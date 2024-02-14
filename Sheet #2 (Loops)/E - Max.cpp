#include <iostream>

using namespace std;

int main()
{
    int number , test_caces , maxnu = 0;
    cin >> test_caces ;
    while(test_caces--){
     cin >> number ;
     if(number > maxnu){
          maxnu = number ;
     }
    }
    cout<< maxnu ;
    return 0;
}
