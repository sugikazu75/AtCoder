#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    string S;
    cin >> S;

    for(int i=0; i<S.size(); i++){
        if(S[i]=='?'){
            S[i] = 'D';
        }
    }

    rep(i,S.size()) cout << S[i];
}