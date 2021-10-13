#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    rep(i,n){
        ll a;
        cin >> a;
        if(a >= 10){
            ans += a - 10;
        }
    }

    cout << ans << endl;
}
