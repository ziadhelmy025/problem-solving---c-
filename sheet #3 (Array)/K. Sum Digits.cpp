#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long n , sum = 0;
    cin>> n >> s;
    for(int i = 0 ; i < n ; i++)
        sum+=s[i] - '0' ;
    cout<< sum;
    return 0;
}
