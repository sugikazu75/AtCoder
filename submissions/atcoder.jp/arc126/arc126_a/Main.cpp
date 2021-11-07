#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int t;
    cin >> t;

    rep(i,t){
        ll ans = 0;
        ll n2, n3, n4, n6;
        ll tmp;
        cin >> n2 >> n3 >> n4;
        n6 = n3 / 2;

        ans += min(n6, n4);
        tmp = min(n6, n4);
        n6 -= tmp;
        n4 -= tmp;

        ans += min(n4/2, n2);
        tmp = min(n4/2, n2);
        n4 -= 2 * tmp;
        n2 -= tmp;

        ans += min(n6, n2/2);
        tmp = min(n6, n2/2);
        n6 -= tmp;
        n2 -= 2 * tmp;

        ans += min(n4, n2/3);
        tmp = min(n4, n2/3);
        n4 -= tmp;
        n2 -= 3 * tmp;

        ans += n2 / 5;

        cout << ans << endl;
    }
}