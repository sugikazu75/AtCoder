#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    ll mod = 1000000007;

    if(n == 1){
        cout << k << endl;
        return 0;
    }
    if(n == 2){
        cout << (k * (k - 1) ) % mod << endl;
        return 0;
    }
    if(k < 3){
        cout << 0 << endl;
        return 0;
    }

    ll ans = (k * (k - 1)) % mod;

    vector <ll> beki(70);
    beki[0] = 1;
    beki[1] = k - 2;
    for(ll i=2; i<70; i++){
        beki[i] = (beki[i-1] * beki[i-1]) % mod;
    }

    bitset <70> s(n-2);
    for(int i=0; i<70; i++){
        if(s.test(i)){
            //cout << i << endl;
            ans = (ans * beki[i + 1]) % mod;
        }
    }

    cout << ans <<endl;
}
