#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int h,w;
vector <int> parent;

int root(int x){
    if(parent[x] == -1) return -1;
    if(parent[x] == x) return x;
    else return parent[x] = root(parent[x]);
}

void unite(int x, int y){
    x = root(x);
    y = root(y);
    if(x == y) return;
    parent[x] = y;
}

bool same(int x, int y){
    return root(x) == root(y);
}

int main(){
    cin >> h >> w;
    parent.resize(h * w);
    rep(i, h * w) parent[i] = -1;    //-1 == non_visited
    int q;
    cin >> q;

    vector <int> t(q), r(q), c(q), ra(q), ca(q), rb(q), cb(q);
    rep(i,q){
        cin >> t[i];
        if(t[i] == 1){
            cin >> r[i] >> c[i];
        }
        else{
            cin >> ra[i] >> ca[i] >> rb[i] >> cb[i];
        }
    }

    rep(i,q){
        if(t[i] == 1){
            int hash = (r[i]-1) * w + (c[i]-1);
            parent[hash] = hash;
            if(hash % w != w-1){
                if(parent[hash + 1] >= 0) unite(hash, hash + 1);
            }
            if(hash + w < h * w){
                if(parent[hash + w] >= 0) unite(hash, hash + w);
            }
            if(hash % w != 0){
                if(parent[hash - 1] >= 0) unite(hash, hash - 1);
            }
            if(hash - w >= 0){
                if(parent[hash - w] >= 0) unite(hash, hash - w);
            }
            /*rep(i,h){
                rep(j,w){
                    cout << parent[i * w + j] << " ";
                }
                cout << endl;
            }*/
        }
        if(t[i] == 2){
            int hasha = (ra[i]-1) * w + (ca[i]-1);
            int hashb = (rb[i]-1) * w + (cb[i]-1);
            if(same(hasha, hashb) && parent[hasha] != -1 && parent[hashb]!=-1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }

    }

}