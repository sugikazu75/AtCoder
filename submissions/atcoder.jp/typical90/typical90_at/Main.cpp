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
    rep(i,n){
        a[i] %= 46;
        b[i] %= 46;
        c[i] %= 46;
    }
    vector <ll> factor_a(0), factor_b(0), factor_c(0);
    map <ll, ll> a_cnt, b_cnt, c_cnt;
    rep(i,n){
        if(!a_cnt.count(a[i])){
            a_cnt[a[i]] = 1;
            factor_a.push_back(a[i]);
        } 
        else a_cnt[a[i]]++;
        if(!b_cnt.count(b[i])){
            b_cnt[b[i]] = 1;
            factor_b.push_back(b[i]);
        } 
        else b_cnt[b[i]]++;
        if(!c_cnt.count(c[i])){
            c_cnt[c[i]] = 1;
            factor_c.push_back(c[i]);
        } 
        else c_cnt[c[i]]++;
    }

    ll ans = 0;

    rep(i,factor_a.size()){
        rep(j,factor_b.size()){
            rep(k,factor_c.size()){
                if((factor_a[i] + factor_b[j] + factor_c[k]) % 46 == 0){
                    ans += a_cnt[factor_a[i]] * b_cnt[factor_b[j]] * c_cnt[factor_c[k]];
                }
            }
        }
    }

    cout << ans << endl;
}

