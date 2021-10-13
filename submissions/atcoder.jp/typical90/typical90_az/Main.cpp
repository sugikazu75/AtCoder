#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll mod = 1000000007;

    ll ans = 1;
    rep(i,n){
        ll sum = 0;
        rep(j,6){
            ll a;
            cin >> a;
            sum += a;
        }
        ans = (ans * sum) % mod;
    }

    cout << ans % mod << endl;
}

