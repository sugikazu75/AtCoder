#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    sort(all(a));

    ll left = 0;
    ll right = a[n-1];
    ll mid;
    while(abs(left - right) > 1){
        // (l + mid - 1) / mid　個にわかる
        mid = (left + right) / 2;
        ll ans = 0;
        rep(i,n){  
            ans += (a[i] + mid - 1) / mid - 1;
        }
        if(ans <= k){
            right = mid;
        }
        else{
            left = mid;
        }
    }

    cout << right << endl;
}