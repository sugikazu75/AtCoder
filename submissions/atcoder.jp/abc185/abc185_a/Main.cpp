#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    vector<ll> a(4);
    rep(i,4) cin >> a[i];
    sort(all(a));
    cout << a[0] << endl;
}