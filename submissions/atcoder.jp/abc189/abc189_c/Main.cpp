#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    ll ans = 0;

    for(ll i=0; i<n; i++){
        ll now = a[i];
        for(ll j=i; j<n; j++){
            now = min(now, a[j]);
            ans = max(ans, now*(j-i+1));
        }
    }

    cout << ans << endl;
}