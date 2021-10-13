#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll k,t;
    cin >> k >> t;
    vector <ll> a(t);
    rep(i,t) cin >> a[i];
    
    sort(all(a));
    reverse(all(a));
    ll ans = a[0] - 1;
    if(t == 1){
        cout << k - 1 << endl;
        return 0;
    }
    else{
        for(int i=1; i<t; i++){
            ans = max((ll)0, ans - a[i]);
        }
    }    
    cout << ans << endl;
}