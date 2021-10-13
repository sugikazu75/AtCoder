#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll ans = 1;
    vector <ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(all(a));
    if(a[0] == 0){
        cout << 0 << endl;
        return 0;
    }
    for(int i=0; i<n; i++){
        if(ans > 1000000000000000000/a[i]){
            cout << -1 << endl;
            return 0;
        }
        else{
            ans *= a[i];
        }
    }

    cout << ans << endl;

}