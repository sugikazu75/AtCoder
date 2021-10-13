#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll k;
    cin >> k;
    ll mod = 1000000007;
    vector <ll> ans(k+1,0);   
    if(k % 9 == 0){
        for(int i=1; i<10; i++){
            ans[i] = 1;
        }
        for(int i=0; i<k+1; i++){
            for(int j=1; j<=9; j++){
                if(i - j >= 0){
                    ans[i] += ans[i - j];
                    ans[i] %= mod;
                }
            }
        }
        cout << ans[k] << endl;
    }
    else{
        cout << 0 << endl;
        return 0;
    }
}

