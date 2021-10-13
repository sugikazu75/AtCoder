#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;
    ll mod = 1000000007;
    vector <ll> broken(n,0);//i段目が壊れてるbroken[i-1]=1
    rep(i,m){
        ll a;
        cin >> a;
        broken[a-1] ++;
    }

    vector <ll> dp(n+1,0);
    dp[0] = 1;
    if(broken[1-1]==1){
        dp[1] = 0;
    }
    else{
        dp[1] = 1;
    }

    for(ll i=2; i<=n; i++){
        if(broken[i-1] == 1){
            dp[i] = 0;
        }
        else{
            dp[i] = dp[i-1] + dp[i-2];
            dp[i] %= mod;
        }
    }

    cout << dp[n] << endl;

}
