#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> x(n), y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }

    sort(all(x));
    sort(all(y));

    ll center = (n - 1) / 2;

    ll cx = x[center];
    ll cy = y[center];

    ll ans = 0;
    rep(i,n){
        ans += abs(x[i] - cx);
        ans += abs(y[i] - cy);
    }

    cout << ans << endl;
}