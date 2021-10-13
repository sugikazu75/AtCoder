#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    long N, T;
    cin >> N >> T;
    vector <long> time(N);
    rep(i,N){
        cin >> time[i];
    }

    int ans = T;
    if(N == 1){
        cout << T << endl;
        return 0;
    }
    else{
        for(int i=1; i<N; i++){
            if((time[i] - time[i-1]) >= T){
                ans += T;
            }
            else{
                ans += time[i] - time[i-1];
            }
        }
        cout << ans << endl;
        return 0;
    }
}
