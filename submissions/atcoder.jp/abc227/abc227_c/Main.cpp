#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    ll ans = 0;

    for(ll a=1; a<=5000; a++){
        for(ll b=a; a*b<=(n/b); b++){
            ans += (n/(a*b)) - (b-1);
        }
    }

    cout << ans << endl;
}