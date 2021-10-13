#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;

    vector <int> cnt(n+1,0);
    for(int i=2; i<=n; i++){
        if(!cnt[i]){
            for(int j=0; i * (j+1) <= n; j++){
                cnt[i * (j + 1)]++;
            }
        }
    }

    int ans = 0;
    rep(i,n+1){
        if(cnt[i] >= k) ans++;
    }

    cout << ans << endl;
}