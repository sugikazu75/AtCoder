#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, w;
    cin >> n >> w;

    vector <pair <ll, ll> > vw(n);
    ll sum_v = 0;
    ll sum_w = 0;
    rep(i, n){
        cin >> vw[i].second >> vw[i].first;
        sum_v += vw[i].first;
        sum_w += vw[i].second;
    }

    sort(all(vw));

    // dp[i][j] = i番目まで決めたとき、入れない品物の価値の和がjのときの、入れない品物の重さの和の最大値
    ll dp[n + 1][sum_v + 1];
    rep(i, n + 1){
        rep(j, sum_v + 1) dp[i][j] = -1;
    }

    dp[0][0] = 0;
    rep(i, n){
        ll tmp_v = vw[i].first;
        ll tmp_w = vw[i].second;
        rep(j, sum_v + 1){
            if(dp[i][j] != -1){
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
                dp[i + 1][j + tmp_v] = max(dp[i][j] + tmp_w, dp[i + 1][j + tmp_v]);
            }
        }
    }

    for(ll i = 0; i <= sum_v; i++){
        if(dp[n][i] >= sum_w - w){
            cout << sum_v - i << endl;
            return 0;
        }
    }


}

