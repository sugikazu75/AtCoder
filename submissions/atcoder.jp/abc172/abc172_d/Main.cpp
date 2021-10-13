#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll ans = 0;

    for(int i=1; i<=n; i++){
        ll kosuu = n / i;
        ll M = kosuu * i;
        ll m = i;
        ans += (M + m) * kosuu / 2;
    }

    cout << ans << endl;
}