#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n), b(n), c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) cin >> c[i];

    map <ll, ll> a_cnt, c_cnt;
    vector <vector <ll> > b_index(n+1,vector <ll> (0));

    vector <ll> factor(0);

    rep(i,n){
        if(!a_cnt.count(a[i])){
            a_cnt[a[i]] = 1;
            factor.push_back(a[i]);
        }
        else a_cnt.at(a[i])++;
    }

    rep(i,n){
        if(!c_cnt.count(c[i])) c_cnt[c[i]] = 1;
        else c_cnt.at(c[i])++;
    }

    rep(i,n){
        b_index[b[i]].push_back(i);
    }

    ll ans = 0;
    for(ll x:factor){
        for(ll y:b_index[x]){
            ll tmpa = (ll)a_cnt.at(x);
            if(c_cnt.count(y+1)){
                ll tmpc = (ll)c_cnt.at(y+1);
                ans += tmpa * tmpc;
            }
        }
    }

   

    cout << ans << endl;


}

