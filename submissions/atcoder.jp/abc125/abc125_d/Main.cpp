#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);

    ll cnt = 0;
    rep(i,n){
        cin >> a[i];
        if(a[i] < 0) cnt++;
    }

    ll ans = 0;
    if(cnt % 2 == 0){
        rep(i,n){
            ans += abs(a[i]);
        }
        cout << ans << endl;
        return 0;
    }
    
    else{
        vector <ll> b(n);
        rep(i,n){
            b[i] = abs(a[i]);
        }
        sort(all(b));
        rep(i,n){
            if(i==0){
                ans -= b[i];
            }
            else{
                ans+=b[i];
            }
        }
        cout << ans << endl;
        return 0;
    }
    
}
