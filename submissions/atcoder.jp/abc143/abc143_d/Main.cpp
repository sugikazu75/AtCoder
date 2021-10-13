#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    vector <ll> l(n);
    rep(i,n) cin >> l[i];

    sort(all(l));

    ll ans = 0;
    for(ll i=0; i<n-2; i++){
        for(ll j=i+1; j<n-1; j++){
            ll a = l[i];
            ll b = l[j];
            ll c = a + b;
            auto ite = lower_bound(all(l), c);
            ans = ans + ite - l.begin() - 1 - j;
        }
    }

    cout << ans << endl;
}