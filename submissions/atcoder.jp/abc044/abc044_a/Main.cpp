#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, k, x, y;
    cin >> n >> k >> x >> y;

    ll ans = x * min(n, k) + y * max(0, n - k);
    cout << ans << endl;
    
}