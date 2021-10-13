#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;

    vector <ll> path(n,0);
    rep(i,m){
        ll a,b;
        cin >> a >> b;
        if(a > b) path[a-1]++;
        if(b > a) path[b-1]++; 
    }

    ll ans = 0;
    rep(i,n){
        if(path[i] == 1) ans++;
    }

    cout << ans << endl;
}