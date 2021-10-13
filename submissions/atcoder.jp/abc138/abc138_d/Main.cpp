#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,q;
    cin >> n >> q;
    vector <vector <ll> > G(n, vector <ll> (0));
    rep(i,n-1){
        ll a,b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector <ll> c(n,0);
    rep(i,q){
        ll p,x;
        cin >> p >> x;
        c[p-1] += x;
    }
    vector <bool> did(n,false);
    queue <int> que;
    //did[0] = true;
    que.push(0);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        did[v] = true;
        for(ll next_v : G[v]){
            if(did[next_v]) continue;
            c[next_v] += c[v];
            que.push(next_v);
        }
    }
    rep(i,n){
        cout << c[i] << " ";
    }
    cout << endl;
}