#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll x;
    cin >> x;

    ll ans = 0;
    for(int i=0; i<=a; i++){
        for(int j=0; j<=b; j++){
            for(int k=0; k<=c; k++){
                if(500 * i + 100 * j + 50 * k == x) ans++;
            }
        }
    }

    cout << ans << endl;
}