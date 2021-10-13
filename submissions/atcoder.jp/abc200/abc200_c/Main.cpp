#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];
    
    vector <ll> b(n);
    rep(i,n) b[i] = a[i] % 200;
    map <ll,ll> table;
    vector <ll> factor(0);
    rep(i,n){
        if(table.count(b[i])){
            table.at(b[i])++;
        }
        else{
            table[b[i]] = 1;
            factor.push_back(b[i]);
        }
    }


    ll ans = 0;
    for(ll x:factor){
        ans += table.at(x) * (table.at(x) - 1) / 2;
    }

    cout << ans << endl;

}
