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

    ll ans = 1;
    rep(i,32){
        ans *= 2;
    }
    //cout << ans << endl;
    bitset <30> now(0);
    //cout << now << endl;
    for(ll i=0; i < (1<<n-1); i++){
        now.reset();
        //cout << i << endl;
        bitset <20> s(i);
        bitset <30> tmpans(0);
        for(int j=0; j<n; j++){
            bitset <30> tmp(a[j]);
            now = now | tmp;
            if(s.test(j)){
                tmpans = tmpans ^ now;
                now.reset();
            }
        }
        tmpans = tmpans ^ now;
        ans = min(ans , (ll)tmpans.to_ullong());
    }

    cout << ans << endl;
} 
