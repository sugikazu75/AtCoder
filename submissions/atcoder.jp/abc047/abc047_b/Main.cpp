#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll w,h,n;
    cin >> w >> h >> n;
    vector <ll> x(n), y(n), a(n);
    rep(i,n) cin >> x[i] >> y[i] >> a[i];

    ll l = 0, r = w;
    ll d = 0, u = h;

    rep(i,n){
        if(a[i] == 1){
            l = max(l, x[i]);
        }
        else if(a[i] == 2){
            r = min(r, x[i]);
        }
        else if(a[i] == 3){
            d = max(d, y[i]);
        }
        else{
            u = min(u, y[i]);
        }
    }

    if(r <= l || u <= d){
        cout << 0 << endl;
    }
    else{
        cout << (r - l) * (u - d) << endl; 
    }
}