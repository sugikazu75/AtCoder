#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n),b(n),a2b(n);
    ll sum = 0;
    ll ans = 0;
    rep(i,n) {
        cin >> a[i] >> b[i];
        a2b[i] = 2 * a[i] + b[i];
        sum += a[i] + b[i];
    }


    sort(all(a2b));
    while(sum > 0){
        sum -= a2b[ans];
        ans++;
    }

    cout << n - ans +  1 << endl;
}