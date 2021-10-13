#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;


int n;
vector <int> par;     //親
vector <int> ran;    //木の深さ

//n要素で初期化
void inti(int n){
    for(int i=0; i<n; i++){
        par.push_back(i);
        ran.push_back(0);
    }
}

//木の根を求める
int find(int x){
    if(par[x] == x){
        return x;
    }
    else{
        return par[x] = find(par[x]);
    }
}

//xとyの属する集合を併合
void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;

    if(ran[x] < ran[y]){
        par[x] = y;
    }
    else{
        par[y] = x;
        if(ran[x] == ran[y]) ran[x]++;
    }
}

//xとyが同じ集合に属するか否か
bool same(int x,int y){
    return find(x) == find(y);
}


int main(){
    ll m;
    cin >> n >> m;
    vector <ll> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) {
        int tmp;
        cin >> tmp;//目標
        b[i] = (tmp - a[i]);//差分
        //cout << b[i] << endl;
    }

    inti(n);//初期化

    rep(i,m){
        int c,d;
        cin >> c >> d;
        unite(c-1,d-1);//結合
    }

    rep(i,n){
        int tmppar = find(i);//iの根
        //cout << tmppar << endl;
        if(i != tmppar){//自分以外がne
            b[tmppar] += b[i];
            b[i] = 0;
        }
    }

    bool ok = true;

    rep(i,n){
        if(b[i] != 0){
            ok = false;
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    

}