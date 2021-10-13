#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string N;
    cin >> N;

    int ok = 0;
    for(int i=0; i<N.size(); i++){
        if(N[i] == '7'){
            ok = 1;
            break;
        }

    }

    if(ok == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}