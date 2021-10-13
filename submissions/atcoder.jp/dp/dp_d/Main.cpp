#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, w;
    cin >> n >> w;

    vector <pair <ll, ll> > wv(n);
    ll sum_w = 0;
    rep(i,n){
        ll g, v;
        cin >> g >> v;
        wv[i] = {g, v};
        sum_w += g; 
    }
    
    sort(all(wv));

    ll dp[n + 1][w + 1];
    rep(i, n + 1){
        rep(j, w + 1) dp[i][j] = -1;
    }

    dp[0][0] = 0;
    rep(i, n){
        rep(j, w + 1){
            if(dp[i][j] != -1){
                ll tmp_w = wv[i].first;
                ll tmp_v = wv[i].second;
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);                             //not use
                if(j + tmp_w <= w){
                    dp[i + 1][j + tmp_w] = max(dp[i + 1][j + tmp_w], dp[i][j] + tmp_v);     //use
                }
            }
        }
    }

    ll ans = 0;
    for(int i=0; i<=w; i++){
        ans = max(ans, dp[n][i]);
    }

    cout << ans << endl;
}

