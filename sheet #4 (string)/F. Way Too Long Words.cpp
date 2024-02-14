#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>> t;
    for(int i = 0 ; i < t ; i++)
    {
        string s;
        cin>> s;
        if(s.size() <= 10)
        {
            cout<< s << endl ;
        }
        else
        {
            int b,a;
            a = s.size() - 2;
            b = s.size() - 1;
            cout<< s[0] << a << s[b] << endl;
        }
    }
    return 0;
}
