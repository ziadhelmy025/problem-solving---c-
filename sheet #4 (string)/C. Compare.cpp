#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s,t; cin>> s >> t;
    int i = 0 ;
    if(s <= t)
    {
        cout<< s;
    }
    else
    {
        cout<< t;
    }
    return 0;
}
