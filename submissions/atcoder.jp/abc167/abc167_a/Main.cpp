#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string S,T;
    cin >> S >> T;

    int ok = 0;
    for(int i=0; i<S.size(); i++){
        if(S[i] != T[i]){
            ok++;
            break;
        }
    }

    if(ok == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}