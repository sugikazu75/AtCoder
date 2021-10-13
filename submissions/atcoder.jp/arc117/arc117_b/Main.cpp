#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    ll mod = 1000000007;


    ll ans = 1;
    sort(all(a));

    // rep(i, a.size()) cout << a[i] << " ";

    for(int i=n-1; i>0; i--){
        ans = (ans * (a[i] - a[i-1] + 1)) % mod;
    }
    ans = (ans * (a[0] + 1) ) % mod;

    cout << ans << endl;
}