#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> factor(n+1,0);

    for(ll i=1; i<=n; i++){
        ll tmp = i;
        ll now = 2;
        ll cnt = 0;
        while(tmp > 1){
            while(tmp % now == 0){
                tmp /= now;
                cnt++;
            }
            factor[now] += cnt;
            cnt = 0;
            now++;
        }
    }

    ll mod = 1000000007;
    vector <ll> pow2(1200);
    ll tmp2 = 1;
    for(int i=0; i < pow2.size(); i++){
        pow2[i] = tmp2;
        tmp2 = (tmp2 * 2) % mod;
    }

    ll ans = 1;
    for(int i=0; i<n+1; i++){
        ans = (ans * (factor[i] + 1)) % mod;
    }

    //cout << factor[2] << " " << factor[3] << " " << factor[4] << endl;
    cout << ans << endl;
}

