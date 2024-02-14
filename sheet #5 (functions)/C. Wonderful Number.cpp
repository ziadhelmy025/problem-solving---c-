// C++ implementation to check whether binary
// representation of a number is palindrome or not
#include <bits/stdc++.h>
using namespace std;

unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;

    while (n > 0)
    {

        rev <<= 1;

        if (n & 1 == 1)
            rev ^= 1;

        n >>= 1;
    }

    return rev;
}
bool isPalindrome(unsigned int n)
{
    unsigned int rev = reverseBits(n);

    return (n == rev);
}
int main()
{
    unsigned int n ;
    cin>>n;
    if(n%2==0)
    {
        cout<< "NO";
    }
    else if (isPalindrome(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
