#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,m;
    cin >> n >> m;

    vector <vector <ll> > day_get(100010, vector <ll>(0));     //day, money
    rep(i,n){
        ll a, b;
        cin >> a >> b;
        day_get[a].push_back(b);
    }

    ll ans = 0;
    priority_queue <ll> pq;
    for(ll i=1; i<=m; i++){
        for(ll x:day_get[i]){
            pq.push(x);
        }
        if(!pq.empty()){
            ll tmp = pq.top();
            ans += tmp;
            pq.pop();
        }
    }

    cout << ans << endl;
}


