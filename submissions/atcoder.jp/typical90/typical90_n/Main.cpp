#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    sort(all(a));
    sort(all(b));
    ll ans = 0;
    rep(i,n) ans += abs(a[i] -b[i]);
    cout << ans << endl;
} 
