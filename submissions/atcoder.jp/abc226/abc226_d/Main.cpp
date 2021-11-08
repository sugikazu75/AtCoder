#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> x(n), y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }

    ll ans = 0;
    map <pair <ll, ll>, int> table;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j) continue;
            ll dx = x[i] - x[j];
            ll dy = y[i] - y[j];
            ll m = abs(__gcd(dx, dy));
            if(!table.count({dx/m, dy/m})){
                // cout << dx/m << " " << dy/m << endl;
                table[{dx/m, dy/m}] = 1;
                ans++;
            }
        }
    }

    cout << ans << endl;
}