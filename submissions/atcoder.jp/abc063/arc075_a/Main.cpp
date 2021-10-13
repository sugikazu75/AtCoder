#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N;
    cin >> N;
    vector <int> s1 (0);
    vector <int> s10(0);

    rep(i,N){
        int d;
        cin >> d;
        if(d % 10 == 0){
            s10.push_back(d);
        }
        else{
            s1.push_back(d);
        }
    }

    sort(s1.begin(), s1.end());

    int sum1 = 0;
    int sum10= 0;
    rep(i,s10.size()){
        sum10 += s10[i];
    }
    rep(i,s1.size()){
        sum1 += s1[i];//zero kamo
    }

    if(s1.size() == 0){
        cout << 0 << endl;
        return 0;
    }
    else{
        if(sum1 % 10 == 0){
            cout << sum1 + sum10 - s1[0] << endl;
        }
        else{
            cout << sum1 + sum10 << endl;
        }
    }
}
