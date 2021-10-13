#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long A, B, N;
    cin >> A >> B >> N;

    long a = min(B-1, N);

    long b = (A*a)/B;

    cout << b << endl; 
}