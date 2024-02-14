#include <iostream>

using namespace std;

int main()
{
    string s; int cnt=1;
    getline(cin,s);
    for (int i=1; i<s.size(); i++)
        if (((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) && ((s[i-1]<'a'||s[i-1]>'z')&& (s[i-1]<'A'||s[i-1]>'Z')))
            if (i>1)
            cnt++;
    cout << cnt ;
}
