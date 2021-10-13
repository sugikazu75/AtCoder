#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n ,q;
    cin >> n >> q;
    vector <ll> a(n), t(q), x(q), y(q);
    rep(i,n) cin >> a[i];
    rep(i,q) cin >> t[i] >> x[i] >> y[i];

    ll cnt = 0;
    rep(i,q){
        if(t[i] == 2) cnt++;
        else if(t[i] == 1){
            ll tmp_x = (x[i] - 1 - cnt + 2 * n) % n;
            ll tmp_y = (y[i] - 1 - cnt + 2 * n) % n;

            ll tmp = a[tmp_x];
            a[tmp_x] = a[tmp_y];
            a[tmp_y] = tmp;
        }
        else{
            cout << a[(x[i] - 1 - cnt + 2 * n) % n]  << endl;
        }
    }


}

