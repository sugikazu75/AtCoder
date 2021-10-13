#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,k;
    cin >> n >> k;

    vector <ll> factor(0);
    rep(i,n){
        ll a,b;
        cin >> a >> b;
        factor.push_back(b);
        factor.push_back(a - b);
    }

    ll ans = 0;
    sort(all(factor));
    reverse(all(factor));
    rep(i,k){
        ans += factor[i];
    }

    cout << ans << endl;
}

