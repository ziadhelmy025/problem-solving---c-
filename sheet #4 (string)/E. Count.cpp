#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string x;
    cin>>x;
    long long sum = 0;
    for(int i = 0 ; i < x.size() ; i++)
    {
        sum = sum + x[i] - '0';
    }
    cout<< sum;
    return 0;
}
