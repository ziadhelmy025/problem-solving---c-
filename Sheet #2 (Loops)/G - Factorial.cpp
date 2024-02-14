#include <iostream>

using namespace std;

int main()
{
    int test_case ;
    cin >> test_case ;
    for( ;  test_case-- ; )
    {
         int number ;
         long long factorial  = 1;
        cin >> number ;
        for( int i = 1  ; i <= number ; i++)
        {
            factorial *= i ;
        }
        cout<< factorial << endl ;
    }
    return 0;
}
