#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    ll ans = 0;

    ans += (n/500) * 1000 + ((n - (n/500) * 500) / 5) * 5;

    cout << ans << endl;
}
