#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> t(n), x(n), y(n);
    rep(i,n){
        cin >> t[i] >> x[i] >> y[i];
    }
    ll nowt = 0 , nowx = 0 , nowy = 0;
    bool ok =  true;
    rep(i,n){
        ll tmpt = t[i] - nowt;
        ll tmpx = abs(x[i] - nowx);
        ll tmpy = abs(y[i] - nowy);

        if(tmpx + tmpy > tmpt || (tmpx + tmpy) % 2 != tmpt % 2) ok = false;
        nowt = t[i];
        nowx = x[i];
        nowy = y[i];
    }
    if(ok) cout << "Yes" <<  endl;
    else cout << "No" << endl;
}