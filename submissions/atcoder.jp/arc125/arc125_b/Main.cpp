#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    ll mod = 998244353;

    ll ans = 0;
    for(ll i=1; i*i<=n; i++){
        ans += n / i;
        ans %= mod;
    }

    for(ll i=1; i*i<=n; i++){
        ans -= i-1;
    }

    for(ll i=1; i*i<=n; i++){
        if(i % 2 == 1){
            ll all = n / i / 2;
            ll small = i / 2;
            ans -= all - small;
        }
        else{
            ll all = (n / i + 1) / 2;
            ll small = i / 2;
            ans -= all - small; 
        }
    }

    while(ans < 0) ans += mod;

    ans %= mod;

    cout << ans << endl;
}