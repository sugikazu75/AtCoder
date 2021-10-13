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

    sort(all(a));

    vector <ll> b(n);
    rep(i,n) b[i] = a[i];
    for(int i=1; i<n; i++){
        b[i] += b[i-1];
    }

    ll ans = 1;
    for(ll i=n-2; i>=0; i--){
        if(2 * b[i] >=  a[i+1]){
            ans++;
        }
        else break;
    }

    cout << ans << endl;
    

}