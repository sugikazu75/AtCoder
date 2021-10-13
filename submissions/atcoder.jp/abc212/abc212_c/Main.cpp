#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;
    vector <ll> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    sort(all(a));
    sort(all(b));

    ll ans = 100000000000;

    if(n == 1 && m == 1){
        cout << abs(a[0] - b[0]) << endl;
        return 0;
    }

    ll now_b = 0;

    for(ll i=0; i<n; i++){
        for(ll j=now_b; j<m; j++){
            ans = min(ans , abs(a[i] - b[j]));
            if(a[i] < b[j]){
                break;
            }
            else if(a[i] == b[j]){
                cout << 0 << endl;
                return 0;
            }
            else{
                now_b = j;
            }
        }
    }

    cout << ans << endl;
}