#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

//modを取らない場合MOD=INFとすれば良い
ll MOD = 998244353;
long long loop_pow_mod(long long x, long long n){
    if(n==0) return 1;
    if(n % 2 == 0){
        long long tmp = loop_pow_mod(x, n/2);
        return (tmp * tmp) % MOD;
    }
    else return (x * loop_pow_mod(x, n-1))  % MOD;
}

int main(){
    ll n;
    cin >> n;
    vector <ll> d(n);
    rep(i,n) cin >> d[i];

    if(d[0] != 0){
        cout << 0 << endl;
        return 0;
    }

    if(n==1){
        cout << 1 << endl;
        return 0;
    }

    vector <ll> fac;
    map <ll,ll> table;
    rep(i,n){
        if(!table.count(d[i])){
            table[d[i]] = 1;
            fac.push_back(d[i]);
        }
        else{
            table.at(d[i])++;
        }
    }

    if(table.at(0) > 1){
        cout << 0 << endl;
        return 0;
    }

    sort(all(fac));

    for(int i=0; i<fac.size(); i++){
        if(fac[i] != i){
            cout << 0 << endl;
            return 0;
        }
    }

    ll ans = 1;
    for(int i=1; i<fac.size(); i++){
        ans = ans * loop_pow_mod(table.at(fac[i-1]), table.at(fac[i])) % MOD;
        //cout << ans << endl;
    }

    cout << ans % MOD << endl;
}
