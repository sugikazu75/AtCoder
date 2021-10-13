#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    vector <ll> h(n);
    rep(i,n) cin >> h[i];
    ll inf = 10000000000000;
    vector <ll> ans(n, inf);
    ans[0] = 0;
    rep(i,n-1){
        if(ans[i] != inf){
            rep(j, k){
                if(i + j + 1 > n - 1) break;
                else{
                    ans[i + j + 1] = min(ans[i + j + 1], ans[i] + abs(h[i] - h[i + j + 1]));
                }
            }
        }
    }
    cout << ans[n-1] << endl;
}