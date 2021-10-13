#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;
    
    vector <vector <ll> > root(n+1);

    rep(i,m){
        ll a,b;
        cin >> a >> b;
        root[a].push_back(b);
        root[b].push_back(a);
    }

    vector <ll> dist(n+1,0);
    vector <ll> par(n+1,0);
    vector <bool> visit(n+1, false);

    queue <ll> q;

    dist[1] = 0;
    visit[1] = true;

    q.push(1);

    while(!q.empty()){
        ll tmp = q.front();
        q.pop();
        for(auto x:root[tmp]){
            if(!visit[x]){
                visit[x] = true;
                dist[x] = dist[tmp]+1;
                par[x] = tmp;
                q.push(x);
            }    
        }
    }

    cout << "Yes" << endl;
    for(ll i=2; i<=n; i++){
        cout << par[i] << endl;
    }
}
