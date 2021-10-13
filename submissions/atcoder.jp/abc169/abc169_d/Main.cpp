#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    ll now = 2;
    vector <ll> num(0);
    for(ll i=2; i * i <= n; i++){
        ll cnt = 0;
        while(n % i == 0){
            n /= i;
            cnt++;
        }
        if(cnt > 0) num.push_back(cnt);
    }
    if(n > 1) num.push_back(1);

    // rep(i, num.size()) cout << num[i] << " ";
    // cout << endl;

    ll ans = 0;

    rep(i, num.size()){
        ll j=0;
        while(j * (j + 1) / 2 <= num[i]) j++;

        ans += j - 1;
    }

    cout << ans << endl;
}