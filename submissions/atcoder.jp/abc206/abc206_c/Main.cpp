#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) cin >>a[i];

    map <ll, ll> table;     //element, cnt
    vector <ll> element(0);
    rep(i,n){
        if(!table.count(a[i])){
            table[a[i]] = 1;
            element.push_back(a[i]);
        }
        else{
            table.at(a[i])++;
        }
    }

    ll ans = n * (n-1) / 2;
    for(ll x:element){
        ans -= table.at(x) * (table.at(x) - 1) / 2;
    }

    cout << ans << endl;
}
