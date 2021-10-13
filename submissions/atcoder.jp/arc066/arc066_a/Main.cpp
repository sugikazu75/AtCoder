#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    ll mod = 1000000007;

    vector <ll> num((n-1)/2 + 1, 0);

    for(int i=0; i<n; i++){
        if(n % 2 == 0){
            if(a[i] % 2 == 0){
                cout << 0 << endl;
                return 0;
            }
            num[a[i]/2]++;
        }
        else{
            if(a[i] % 2 == 1){
                cout << 0 << endl;
                return 0;
            }
            num[a[i]/2]++;
        }
    }

    bool ok = true;
    for(int i=0; i<num.size(); i++){
        if(i == 0){
            if(n % 2 == 0 && num[0] != 2){
                ok = false;
            }
            if(n % 2 == 1 && num[0] != 1){
                ok = false;
            }
        }
        else{
            if(num[i] != 2){
                ok = false;
            }
        }
    }

    ll ans = 1;
    if(!ok){
        cout << 0 << endl;
        return 0;
    }
    else{
        for(int i=0; i<num.size(); i++){
            ans = (ans * num[i]) % mod;
        }

        cout << ans << endl;
    }

}