#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> d(n);
    rep(i,n) cin >> d[i];

    ll ans = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            ans += d[i] * d[j];
        }
    }

    cout << ans << endl;
}