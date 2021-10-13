#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

ll calc(ll x){
    ll ans = 0;
    ll tmp = x;
    while(tmp > 0){
        tmp /= 10;
        ans++;
    }
    return ans;
}


int main(){
    ll n;
    cin >> n;

    ll ans = 1000000;
    for(ll i=1; i*i<=n; i++){
        if(n % i == 0){
            ans = min(ans, max(calc(i), calc(n/i)));
        }
    }

    cout << ans << endl;
}