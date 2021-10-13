#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

const int MAX_V = 1000;

int d[MAX_V][MAX_V];    //d[u][v] = e(u,v)のコスト(存在しない場合はINF, ただしd[i][i]=0)
int V;                  //頂点数

void warshall_floyd(){
    for(int k=0; k<V; k++){
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}