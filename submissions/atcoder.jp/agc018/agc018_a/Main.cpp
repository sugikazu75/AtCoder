#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ll n, k;
    cin >> n >> k;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];
    sort(all(a));
    reverse(all(a));
    // rep(i,n){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    if(k > a[0]){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    ll g = a[0];
    for(int i=0; i<n; i++){
        g = gcd(g, a[i]);
    }
    // cout << g << endl;

    for(int i=0; i<n; i++){
        if(a[i] - k >= 0 && (a[i] - k) % g == 0){
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;

}