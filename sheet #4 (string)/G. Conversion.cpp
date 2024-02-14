#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin>> s;
    for(int i = 0 ; i < s.size() ;i++)
    {
        if(s[i] == ',')
        {
            s[i] = ' ';
        }
        else if(int(s[i]) >= 65 && int(s[i]) <= 90)
        {
            s[i] += 32;
        }
        else if(int(s[i]) >= 97 && int(s[i]) <= 122)
        {
            s[i] -= 32;
        }
    }
    cout<< s;
    return 0;
}
