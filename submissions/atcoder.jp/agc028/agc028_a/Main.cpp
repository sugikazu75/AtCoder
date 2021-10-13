#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;

    ll g = __gcd(n,m);
    ll c = n / g, d = m / g;

    bool ok = true;
    for(int i=0; i<=g-1; i++){
        if(s[i * c] != t[i * d]) ok = false;
    }

    if(ok) cout << g * c * d << endl;
    else cout << -1 << endl;
}