#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;

    vector <vector <ll> > path(n, vector <ll>(0));
    rep(i,m){
        ll a,b;
        cin >> a >> b;
        path[a-1].push_back(b-1);
    }

    ll ans = 0;

    for(int i=0; i<n; i++){
        vector <int> used(n, 0);
        queue <ll> q;
        q.push(i);
        used[i] = 1;
        ll now = 0;
        while(!q.empty()){
            ll from = q.front();
            q.pop();
            for(ll to:path[from]){
                if(!used[to]){
                    used[to] = 1;
                    q.push(to);
                    now++;
                }
            }
        }
        ans += now;
    }

    cout << ans + n << endl;
}