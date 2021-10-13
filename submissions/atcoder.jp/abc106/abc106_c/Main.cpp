#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string S;
    cin >> S;
    long K;
    cin >> K;

    int place = 0;
    char num = '0';

    for(int i=0; i<S.size(); i++){
        if(S[i] != '1'){
            place = i;
            num = S[i];
            break;
        }
    }

    if(num == '0'){
        cout << 1 << endl;
    }
    else if(K >= place+1){
        cout << num << endl;
    }

    else{
        cout << 1 << endl;
    }
}