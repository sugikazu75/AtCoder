#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll x, y, a, b;
    cin >> x >> y >> a >> b;

    ll ans = (y-1-x) / b;
    ll now = 0;

    while(x < y/a){
        x *= a;
        now ++;

        ans = max(ans, now+(y-1-x)/b);
    }
    cout << ans << endl;
}
