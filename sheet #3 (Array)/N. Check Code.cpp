#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x , y;
    string s;
    bool f = 1;
    cin>> x >> y >> s;
    char arr[100];
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(i==x)
            continue;
        else if(s[i]=='-')
        {
            f = 0;
            break;
        }
    }
    if(f == 1 && s.size()== x+y+1 && s[x]=='-')
        cout<< "Yes";
    else
        cout<< "No";

    return 0;
}
