#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i, n) cin >> a[i];

    ll mod = 998244353;
    ll dp[n][10];
    rep(i, n){
        rep(j, 10) dp[i][j] = 0;
    }

    dp[0][a[0]] = 1;

    for(int i=1; i<=n-1; i++){
        for(int j=0; j<10; j++){
            if(dp[i-1][j] != 0){
                dp[i][(j + a[i]) % 10] = (dp[i][(j + a[i]) % 10] + dp[i-1][j]) % mod;
                dp[i][(j * a[i]) % 10] = (dp[i][(j * a[i]) % 10] + dp[i-1][j]) % mod;
            }
        }

        // rep(j, 10) cout << dp[i][j] << " ";
        // cout << endl;
    }

    for(int i=0; i<10; i++){
        cout << dp[n-1][i] << endl;
    }
}