#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll r, c, n;
    cin >> r >> c >> n;
    
    long long dp[r+1][c+1][4];
    rep(i, r+1){
        rep(j, c+1){
            rep(k, 4){
                dp[i][j][k] = 0;
            }
        }
    }

    vector <vector <ll> > cost(r+1, vector <ll> (c+1,0));

    rep(i,n){
        ll now_r, now_c, v;
        cin >> now_r >> now_c >> v;
        cost[now_r][now_c] = v;
    }

    for(ll i=0; i<r+1; i++){
        for(ll j=0; j<c+1; j++){
            if(i != 0){
                if(cost[i][j] == 0){
                    for(ll k=0; k<4; k++) dp[i][j][0] = max(dp[i][j][0], dp[i-1][j][k]);
                }
                else{
                    for(int k=0; k<4; k++){
                        dp[i][j][0] = max(dp[i][j][0], dp[i-1][j][k]);
                        dp[i][j][1] = max(dp[i][j][1], dp[i-1][j][k] + cost[i][j]);
                    }
                }
            }
            if(j != 0){
                if(cost[i][j] == 0){
                    for(ll k=0; k<4; k++) dp[i][j][k] = max(dp[i][j][k], dp[i][j-1][k]);
                }
                else{
                    dp[i][j][0] = max(dp[i][j][0], dp[i][j-1][0]);
                    dp[i][j][1] = max(dp[i][j][1], max(dp[i][j-1][1], dp[i][j-1][0] + cost[i][j]));
                    dp[i][j][2] = max(dp[i][j][2], max(dp[i][j-1][2], dp[i][j-1][1] + cost[i][j]));
                    dp[i][j][3] = max(dp[i][j][3], max(dp[i][j-1][3], dp[i][j-1][2] + cost[i][j]));
                }
            }
        }
    }

    ll ans = 0;
    for(ll k=0; k<4; k++){
        ans = max(ans, dp[r][c][k]);
    }

    cout << ans << endl;
}