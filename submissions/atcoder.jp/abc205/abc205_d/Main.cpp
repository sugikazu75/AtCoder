#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, q;
    cin >> n >> q;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    rep(i,q){
        ll k;
        cin >> k;

        ll ans = k;
        ll tmp = 0;
        while(true){
            ans = k + tmp;
            auto ite = upper_bound(all(a), ans);
            tmp = ite - a.begin();

            if(k + tmp == ans){
                cout << ans << endl;
                break;
            }
        }   
    }
}