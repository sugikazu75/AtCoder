#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int sign(ll x){
    if(x >= 0) return 1;
    else return -1;
}

int main(){
    ll n,k;
    cin >> n >> k;
    vector <ll> x(n);
    rep(i,n) cin >> x[i];
    ll ans = 1000000000000;
    for(int i=0; i<=n-k; i++){
        ll start = x[i];
        ll end = x[i + k-1];
        if(sign(start) == sign(end)){
            ans = min(ans , max(abs(start) , abs(end)) );
        }
        else{
            ans = min(ans , 2 * min(abs(start) , abs(end)) + max(abs(start) , abs(end)));
        }
    }
    cout << ans << endl;
} 
