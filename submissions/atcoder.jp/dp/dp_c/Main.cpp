#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll abc[n][3];
    rep(i,n){
        ll a,b,c;
        cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
    }

    ll dp[n + 1][3];

    rep(i, n + 1){
        rep(j, 3) dp[i][j] = 0;
    }

    rep(i,n){
        dp[i+1][0] = max(dp[i+1][0] , max(dp[i][1] + abc[i][0], dp[i][2] + abc[i][0]));
        dp[i+1][1] = max(dp[i+1][1] , max(dp[i][2] + abc[i][1], dp[i][0] + abc[i][1]));
        dp[i+1][2] = max(dp[i+1][2] , max(dp[i][0] + abc[i][2], dp[i][1] + abc[i][2]));
    }

    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
}
