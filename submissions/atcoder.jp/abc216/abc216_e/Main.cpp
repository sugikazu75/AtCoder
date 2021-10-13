#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    vector <ll> a(n);
    ll max_cnt = 0;
    ll max_sum = 0;
    rep(i,n){
        cin >> a[i];
        max_cnt += a[i];
        max_sum += a[i] * (a[i] + 1) / 2; 
    }
    if(k >= max_cnt){
        cout << max_sum << endl;
        return 0;
    }
    
    sort(all(a));
    reverse(all(a));
    a.push_back(0);

    // rep(i,a.size()) cout << a[i] << " ";
    // cout << endl;

    ll ans = 0;
    ll cnt = 0;

    for(ll i=0; i<n; i++){
        if(cnt >= k) break;
        ll dif = a[i] - a[i+1];
        if(dif * (i + 1) <= k - cnt){
            ans += (i + 1) * (a[i] + a[i] - dif + 1) * dif / 2;
            cnt += (i + 1) * dif;
        }
        else{
            ll amari = k - cnt;
            ll loop = amari / (i + 1);
            amari %= (i + 1);
            ans += (i + 1) * (a[i] + a[i] - loop + 1) * loop / 2;
            ans += amari * (a[i] - loop);
            cnt += loop * (i + 1) + amari;
        }
    }

    cout << ans << endl;
}
