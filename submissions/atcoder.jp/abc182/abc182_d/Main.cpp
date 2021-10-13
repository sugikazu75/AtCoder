#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n), b(n);

    ll step = 0;//
    ll stepmax = 0;

    rep(i,n){
        ll tmp;
        cin >> tmp;

        step += tmp;
        stepmax = max(stepmax, step);

        a[i] = step;

        b[i] = stepmax; 
        
    }

    ll now = 0;
    ll ans = 0;

    rep(i,n){
        ans = max(ans, max(now+a[i], now+b[i]));
        now += a[i];
    }

    cout << ans << endl;

}
