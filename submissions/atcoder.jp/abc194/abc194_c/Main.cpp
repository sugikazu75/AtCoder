#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];
    ll sum = 0;
    ll sum2 = 0;
    rep(i,n){
        sum += a[i];
        sum2 += a[i] * a[i];
    }
    ll by = 0;
    ll tmp = sum;
    rep(i,n){
        tmp -= a[i];
        by += tmp * a[i];
    }
    
    ll ans = (n-1) * sum2 - 2 * by;
    cout << ans << endl;
}