#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    vector <ll> ans(n,0), now(n,0);//ans結果, now = mod2
    for(int i=n-1; i>=0; i--){
        if(now[i] != a[i]){
            ans[i] = (ans[i] + 1) % 2;
            if(ans[i] == 1){
                for(int j=1; j*j<=(i+1); j++){
                    if((i+1) % j == 0){
                        if(j != (i+1)/j){
                            now[j-1] = (now[j - 1] + 1) % 2;
                            now[(i+1)/j - 1] = (now[(i+1)/j - 1] + 1) % 2;
                        }
                        else{
                            now[j-1] = (now[j-1] + 1) % 2;
                        }
                    }
                }
            }
        }
    }
    //if(now[0] == a[0]){
        ll cnt = 0;
        rep(i,n){
            if(ans[i] == 1) cnt++;
        }
        cout << cnt << endl;
        ll tmp = 0;
        rep(i,n){
            if(ans[i] == 1){
                if(tmp != cnt - 1){
                    cout << i + 1 << " " << endl;
                    tmp++;
                }
                else cout << i + 1 << endl;
            }
        }
    //}
    //else cout << -1 << endl;
}