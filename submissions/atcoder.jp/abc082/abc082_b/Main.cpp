#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    string S, T;
    cin >> S >> T;

    sort(S.begin(), S.end());
    sort(T.rbegin(), T.rend());

    if(S < T){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
