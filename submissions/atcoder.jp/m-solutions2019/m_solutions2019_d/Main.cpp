#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    vector <vector <ll> > table(n, vector <ll> (0));
    vector <pair <ll, ll> > path(n-1);
    rep(i,n-1){
        ll a,b;
        cin >> a >> b;
        path[i] = {a-1, b-1};
        table[a-1].push_back(b-1);
        table[b-1].push_back(a-1);
    }

    vector <ll> c(n);
    rep(i,n) cin >> c[i];
    priority_queue <ll> pq;
    rep(i,n) pq.push(c[i]);
    
    queue <ll> q;
    q.push(0);

    vector <ll> ans(n, 0);

    while(!q.empty()){
        ll from = q.front();
        q.pop();
        ans[from] = pq.top();
        pq.pop();
        for(ll to : table[from]){
            if(ans[to] == 0) q.push(to);
        }
    }

    ll sum = 0;
    rep(i, n-1){
        auto tmp = path[i];
        sum += min(ans[tmp.first], ans[tmp.second]);
    }

    cout << sum << endl;
    rep(i,n) cout << ans[i] << " ";
    cout << endl; 

}