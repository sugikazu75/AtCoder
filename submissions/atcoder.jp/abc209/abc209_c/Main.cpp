#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll mod = 1000000007;

    vector <ll> c(n);
    rep(i,n) cin >> c[i];

    sort(all(c));

    ll ans = 1;

    rep(i,n){
        ans = (ans * (c[i] - i)) % mod;
    }

    cout << ans << endl;
}
    
