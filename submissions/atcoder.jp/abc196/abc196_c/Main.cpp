#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=1; i<=1000010; i++){
        ll tmp = i;
        ll len = 0;
        while(tmp > 0){
            tmp /= 10;
            len++;
        } 
        ll pow10 = 1;
        rep(j,len) pow10 *= 10;
        if(i * pow10 + i <= n) ans++;
        else break;
    }
    cout << ans << endl;
} 
