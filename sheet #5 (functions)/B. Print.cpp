#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void print_out(int n);

void print_out(int n) {

    for(int i = 1; i < n; i++) {
        cout << i << " " ;
    }
    cout<< n;

}

int main() {
    int n;

    cin >> n;

    print_out(n);

}
