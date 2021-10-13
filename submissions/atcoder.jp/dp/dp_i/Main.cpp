#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <long double> p(n);
    rep(i,n) cin >> p[i];

    long double dp[n + 1][n + 1];
    rep(i, n + 1){
        rep(j, n + 1) dp[i][j] = 0.0;
    }

    dp[0][0] = 1;
    for(ll i = 1; i < n + 1; i++){
        rep(j, n + 1){
            if(j == 0) dp[i][0] = dp[i - 1][0] * (1.0 - p[i - 1]);
            else dp[i][j] = dp[i - 1][j] * (1.0 - p[i - 1]) + dp[i - 1][j - 1] * p[i - 1];
        }
    }

    long double ans = 0;
    int half = (n + 1) / 2;
    for(int i = n; i >= half; i--){
        ans += dp[n][i];
    }

    cout << setprecision(15);
    cout << ans << endl;

    // rep(i, n + 1){
    //     rep(j, n + 1) cout << dp[i][j] << " ";
    //     cout << endl;
    // }
}