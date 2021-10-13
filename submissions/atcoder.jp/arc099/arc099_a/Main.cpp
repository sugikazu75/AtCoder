#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int N,K;
    cin >> N >> K;
    vector <int> A(N);
    rep(i,N){
        cin >> A[i];
    }

    if((A[0] == 1) || (A[N-1] == 1)){
        if((N-1)%(K-1) == 0){
            cout << (N-1)/(K-1) << endl;
            return 0;
        }
        else{
            cout << (N-1)/(K-1) + 1 << endl;
            return 0;
        }
    }
    else{
        int place1 = 0;
        rep(i,N){
            if(A[i] == 1){
                place1 = i;
                break;
            }
        }
        if((N-1)%(K-1) == 0){
            int ans1 = (N-1)/(K-1);
            cout << ans1 << endl;
            return 0;
        }
        else{
            int ans2 = (N-1)/(K-1) + 1;
            cout << ans2 << endl;
            return 0;
        }
    }
}