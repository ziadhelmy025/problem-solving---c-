#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>> n;
    string s; bool f;
    for(int t = 0 ; t < n ; t++)
    {
        cin>> s;
        if(s.find("010") != string::npos || s.find("101") != string::npos)
        {
            f = 1;
        }
        else
        {
            f = 0;
        }
        if(f == 1)
    {
        cout<< "Good" << endl;
    }
    else
    {
        cout<< "Bad"<< endl;
    }
    }
    return 0;
}
