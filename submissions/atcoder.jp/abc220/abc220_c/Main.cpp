#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    ll loop = 0;

    rep(i,n){
        cin >> a[i];
        loop += a[i];
    }

    ll x;
    cin >> x;

    vector <ll> b(n);
    partial_sum(all(a), b.begin());

    // rep(i,n) cout << b[i] << " ";
    // cout << endl;
    // cout << upper_bound(all(b), 2) - b.begin() << endl;

    ll ans = 0;
    if(x >= loop){
        ans += (x / loop) * n;

        ll sur = x - loop * (x / loop);
        ans += upper_bound(all(b), sur) - b.begin() + 1;

        cout << ans << endl;
    }
    else{
        ans = upper_bound(all(b), x) - b.begin() + 1;
        cout << ans << endl;
    }

}