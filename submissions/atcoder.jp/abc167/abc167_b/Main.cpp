#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long A,B,C,K;
    cin >> A >> B >> C >> K;

    if((A+B) >= K){
        if(A >= K){
            cout << K << endl;
        }
        if(A < K){
            cout << A << endl;
        }
    }
    else{
        cout << 2*A + B - K << endl;
    }
}