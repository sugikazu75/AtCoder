#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,q;
    cin >> n >> q;

    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    vector <ll> d(n-1);
    rep(i, n-1) d[i] = a[i + 1] - a[i];

    ll now = 0;
    rep(i, n-1) now += abs(d[i]);

    rep(i, q){
        ll l, r, v;
        cin >> l >> r >> v;

        if(l - 1 >= 1) {
            now -= abs(d[l-2]);
            d[l - 2] += v;
            now += abs(d[l-2]);
        }

        if(r - 1 <= n-2) {
            now -= abs(d[r-1]);
            d[r - 1] -= v;
            now += abs(d[r-1]);
        }
    
        cout << now << endl;
    }
}
