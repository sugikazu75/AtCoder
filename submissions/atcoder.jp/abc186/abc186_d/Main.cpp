#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    vector <ll> a(n);
    ll sum = 0;
    rep(i,n){
        cin >> a[i];
        sum += a[i];
    }
    //ll tmp = sum;
    sort(all(a));
    ll ans = 0;
    for(int i=0; i<n-1; i++){
        sum -= a[i];
        ans += sum;
        ans -= (n - 1 - i) * a[i];
    }

    cout << ans << endl;
}