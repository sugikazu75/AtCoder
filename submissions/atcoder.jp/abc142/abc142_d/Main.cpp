#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ll a,b;
    cin >> a >> b;

    ll ans = 1;
    ll c = gcd(a,b);
    for(ll i=2; i*i<=c; i++){
        if(c % i == 0){
            ans ++;
            while(c % i == 0) c /= i;
        }
    }
    if(c != 1) ans++;
    cout << ans << endl;
}