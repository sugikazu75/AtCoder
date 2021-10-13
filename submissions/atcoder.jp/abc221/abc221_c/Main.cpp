#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string n;
    cin >> n;

    sort(all(n));
    reverse(all(n));

    ll l = n.size();
    ll ans = 0;

    for(int i=0; i<(1 << 10); i++){
        bitset <10> s(i);
        ll a = 0;
        ll b = 0;
        for(int j=0; j<l; j++){
            ll num = n[j] - '0';
            if(s.test(j)) a = a * 10 + num;
            else b = b * 10 + num;
        }

        ans = max(ans, a * b);
    }

    cout << ans << endl;
}