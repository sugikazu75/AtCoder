#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;
    ll mod = 1000000007;

    vector <vector <ll> > path(n, vector <ll>(0));
    rep(i,m){
        ll a,b;
        cin >> a >> b;
        path[a-1].push_back(b-1);
        path[b-1].push_back(a-1);
    }

    rep(i,n){
        sort(all(path[i]));
    }

    //num[i] = iいくことのできる最短経路の数
    vector <ll> num(n, 0);
    //depth[i] = iの最短深さ
    vector <ll> depth(n, 100000000);
    num[0] = 1;
    depth[0] = 0;

    queue <ll> node; 
    node.push(0);
    
    while(!node.empty()){
        ll parent = node.front();
        node.pop();
        for(ll child:path[parent]){
            if(depth[parent] + 1 < depth[child]){
                depth[child] = depth[parent] + 1;
                num[child] = num[parent];
                num[child] %= mod;
                node.push(child);
            }
            else if(depth[parent] + 1 == depth[child]){
                num[child] += num[parent];
                num[child] %= mod;
                //node.push(child);
            }
        }
    }

    if(depth[n-1] != 100000000) cout << num[n-1] % mod << endl;
    else cout << 0 << endl;
}