#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll tmpa = max(a, max(b, c));
    ll tmpc = min(a, min(b, c));
    b = a + b + c - tmpa - tmpc;
    a = tmpa;
    c = tmpc;

    ll ans = 10000;
    // a > b > c
    for(ll i = min((ll)10000, n/a); i>=0; i--){
        for(ll j = min((ll)10000-i, n/b); j>=0; j--){
            if((n - a*i - b*j) >= 0 && (n - a*i - b*j) % c == 0){
                ans = min(ans, i+j+(n - a*i - b*j) / c);
            }
        }
    }
    cout << ans << endl;
} 
