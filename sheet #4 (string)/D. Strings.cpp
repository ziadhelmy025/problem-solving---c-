#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string x,y;
    cin>> x>> y;
    cout<< x.size() << " " << y.size() << endl;
    cout<< x + y << endl;
    char a,b;
    a = x[0];
    b = y[0];
    x[0] = b;
    y[0] = a;
    cout<< x << " " << y;
    return 0;
}
