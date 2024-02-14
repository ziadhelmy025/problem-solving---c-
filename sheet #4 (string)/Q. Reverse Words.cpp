#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2;
    getline(cin,s1);
    for (int i=0; i<s1.size(); i++)
    {
        if ((s1[i]>='a' && s1[i]<='z')||(s1[i]>='A' && s1[i]<='Z'))
        {
            s2+=s1[i];
        }

        else
        {
            reverse(s2.begin(),s2.end());
            cout << s2 << " ";
            s2.clear();
        }
        if (i==s1.size()-1)
        {
            reverse(s2.begin(),s2.end());
            cout << s2;
        }
    }
}
