#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, k, ans;
    cin >> n >> k;
    ans =  (n / k) * (n / k) * (n / k);
    if(k % 2 == 0){
        ans += ((n + (k / 2)) / k) * ((n + (k / 2)) / k) * ((n + (k / 2)) / k);
    }
    cout << ans << endl;
}