#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    vector <ll> dp(n, 0);                           //最大の売値
    vector <vector <ll> > des(n, vector <ll>(0));   //子リスト
    vector <bool> existdes(n,false);
    rep(i,m){
        ll x,y;
        cin >> x >> y;
        des[x-1].push_back(y-1);
        existdes[x-1] = true;
    }

    for(int i=n-2; i>=0; i--){
        for(ll x:des[i]){
            dp[i] = max(dp[i], max(dp[x], a[x]));
        }
    }

    ll ans = -1000000010;
    rep(i,n){
        if(existdes[i]){
            ans = max(ans, dp[i] - a[i]);
        }
    }

    cout << ans << endl;



}