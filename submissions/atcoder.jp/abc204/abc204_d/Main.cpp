#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> t(n);
    ll sum = 0;
    rep(i,n){
        cin >> t[i];
        sum += t[i];
    }
    sort(all(t));

    int dp[n+1][sum + 1];
    rep(i, n+1){
        rep(j, sum + 1) dp[i][j] = 0;
    } 
    
    dp[0][0] = 1;
    rep(i,n){
        ll now = t[i];
        rep(j, sum + 1){
            if(dp[i][j] == 1){
                dp[i+1][j] = 1;
                dp[i+1][min(sum, j + now)] = 1;
            }
        }
    }
    ll goal = (sum + 1) / 2;
    for(int i=0; i<sum+1; i++){
        if(dp[n][i] == 1 && i >= goal){
            cout << i << endl;
            return 0;
        }
    }
    
}