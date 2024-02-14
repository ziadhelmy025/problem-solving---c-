#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    double number1,number2,ans,res;
    cin>>number1>>number2;
    res = number1/number2;
    int x = res;
    ans = res - x;
    cout<< "floor " << number1 << " / " << number2 << " = " << x <<endl;
    cout<< "ceil " << number1 << " / " << number2 << " = ";
    if(number1==number2)
        cout<< x <<endl;
    else
        cout<< x+1 <<endl;
    cout<< "round " << number1 << " / " << number2 << " = ";
    if(ans<.5)
        cout<<x;
    else
        cout<<x+1;
    return 0;
}

