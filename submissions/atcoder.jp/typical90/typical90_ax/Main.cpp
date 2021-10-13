#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,l;
    cin >> n >> l;

    vector <ll> ans(n+1,0);
    ll mod = 1000000007;

    ans[0] = 1;
    for(int i=1; i<=n+1; i++){
        ans[i] = (ans[i] + ans[i-1]) % mod;
        if(i - l >= 0){
            ans[i] = (ans[i] + ans[i-l]) % mod;
        }
    }

    cout << ans[n] << endl;
}

