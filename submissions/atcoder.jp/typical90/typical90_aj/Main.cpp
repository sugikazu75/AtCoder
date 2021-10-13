#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,q;
    cin >> n >> q;
    vector <ll> x(n), y(n);
    vector <ll> X(n), Y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
        X[i] = x[i] - y[i];
        Y[i] = x[i] + y[i];
    }

    ll minx = X[0];
    ll maxx = X[0];
    ll miny = Y[0];
    ll maxy = Y[0];
    rep(i,n){
        minx = min(minx, X[i]);
        maxx = max(maxx, X[i]);
        miny = min(miny, Y[i]);
        maxy = max(maxy, Y[i]);
    }

    rep(i,q){
        ll t;
        cin >> t;
        t--;
        cout << max(abs(X[t] - minx), max(abs(X[t] - maxx), max(abs(Y[t] - miny), abs(Y[t] - maxy)))) << endl;
    }
    //1,1 -> 0,2
    //1,0 -> 1,1
}