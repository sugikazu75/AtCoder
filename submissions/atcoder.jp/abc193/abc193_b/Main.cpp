#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> a(n),p(n),x(n);
    rep(i,n){
        cin >> a[i] >> p[i] >> x[i];
    }

    ll ans = p[0];
    bool ok = false;
    rep(i,n){
        if(x[i] > a[i]){
            ok = true;
            if(ans > p[i]){
                ans = p[i];
            }
        }
    }

    if(ok) cout << ans << endl;
    else cout << -1 << endl;

}