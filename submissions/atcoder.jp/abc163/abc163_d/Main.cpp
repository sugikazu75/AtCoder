#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,k;
    cin >> n >> k;
    ll ans = 0;
    ll mod = 1000000007;
    for(ll i=k; i<=n+1; i++){//iこ選ぶ
        ll m = (((i*(i-1))/2) + mod) % mod;
        ll M = (((i * (2*n + 1 - i))/2) + mod) % mod;
        ans += (M - m + 1 + mod) % mod;
    }
    cout << ans % mod << endl;
}