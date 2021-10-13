#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    ll ans = 0;
    rep(i,n){
        cin >> a[i];
        ans += a[i] - 1;
    }

    cout << ans << endl;

}