#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

//強連結成分分解
// strongly connected components

ll N = 100100;
vector<ll> G[100100];      //path
vector<ll> H[100100];      //reverse path
vector<ll> I;
vector<bool> used(100100);
ll cnt = 0;

void dfs(ll pos){
    //ノードを使用済みにする
    used[pos] = true;

    //繋がっているノードで未使用のところからdfs
    for(ll i : G[pos]){          
        if(!used[i]) dfs(i);
    }

    //行き場を失ったノードからIに入っていく
    I.push_back(pos);
}


void dfs2(ll pos){
//posから行けるノード数(posを含む)をcntに入れる
    used[pos] = true;
    cnt++;
    for(ll i : H[pos]){
        if(!used[i]) dfs2(i);
    }

}

int main(){
    ll n,m;
    cin >> n >> m;
    rep(i,m){
        ll a,b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        H[b-1].push_back(a-1);
    }    

    for(ll i=0; i<n; i++){
        if(!used[i]) dfs(i);
    }

    ll ans = 0;
    reverse(all(I));
    rep(i,n) used[i] = false;

    for(ll i : I){
        if(used[i]) continue;
        cnt = 0;
        dfs2(i);
        ans += cnt * (cnt - 1) / 2;
    }

    cout << ans << endl;
}