#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    ll lcm = 2;

    for(ll i=2; i<=n; i++){
        ll gcd = __gcd(lcm,i);
        lcm = gcd * (lcm/gcd) * (i/gcd);
    }

    cout << lcm + 1 << endl;

    
    
}
