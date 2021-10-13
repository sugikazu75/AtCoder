#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;

    vector <ll> a(m);
    rep(i,m){
        cin >> a[i];
    }

    if(n == m){
        cout << 0 << endl;
        return 0;
    }
    if(m == 0){
        cout << 1 << endl;
        return 0;
    }

    sort(all(a));

    vector <ll> factor(0);
    ll now = 0;
    for(int i=0; i<m; i++){
        ll tmp = a[i] - now - 1;
        if(tmp > 0){
            factor.push_back(tmp);
        }
        now = a[i];
    }
    if(now < n){
        factor.push_back(n - now);
    }

    sort(all(factor));
    ll length = factor[0];
    ll ans = 0;
    for(ll x:factor){
        ans += (x + length - 1) / length;
    }

    cout << ans << endl;
}