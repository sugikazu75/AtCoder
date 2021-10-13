#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll k, a, b;
    cin >> k >> a >> b;
    
    ll ka = 0, kb = 0;
    ll now = 1;

    while(a > 0 || b > 0){
        ka = ka + now * (a % 10);
        kb = kb + now * (b % 10);
        now *= k;
        a /= 10;
        b /= 10;
    }

    cout << ka * kb << endl;
}