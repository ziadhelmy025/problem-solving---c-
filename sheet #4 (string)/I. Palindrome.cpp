#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s,x,y;
    cin>> s;
    x = s;
    reverse(s.begin(),s.end());
    if(x == s)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }
    return 0;
}
