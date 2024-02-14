#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int number ;  long long Even = 0,Odd = 0,Positive = 0,Negative = 0; cin>> number;
    for(int i = 0 ; i < number ; i++)
    {
        int number2 ; cin>>number2;
        if(number2 < 0)
            Negative++;
        else if(number2 > 0)
              Positive++;
        if(number2 % 2 == 0)
            Even++;
        else
            Odd++;
    }
    cout<<"Even: "<<Even<<"\n";
    cout<<"Odd: "<<Odd<<"\n";
    cout<<"Positive: "<<Positive<<"\n";
    cout<<"Negative: "<<Negative<<"\n";

return 0;
}
