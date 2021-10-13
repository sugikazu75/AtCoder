#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;

    vector <ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    sort(all(a));
    reverse(all(a));

    vector <ll> usable(100010, 1);

    rep(i,n){
        ll tmp = a[i];
        for(ll j=2; j*j<=a[i]; j++){
            while(tmp % j == 0){
                tmp /= j;
                usable[j] = 0;
            }
        }
        if(tmp != 1){
            usable[tmp] = 0;
        }
    }

    for(ll i=1; i<=m; i++){
        if(!usable[i]){
            for(ll j=1; i*j<=m; j++){
                usable[i * j] = 0;
            }
        }
    }

    ll ans = 0;
    for(ll i=1; i<=m; i++){
        if(usable[i]) ans++;
    }

    cout<< ans << endl;
    for(ll i=1; i<=m; i++){
        if(usable[i]){
            cout << i << endl;
        }
    }
}