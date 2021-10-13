#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    
    int n, m, x;
    cin >> n >> m >> x;

    vector <int> cost(n);
    vector <vector <int> > a(n, vector<int> (m));
    rep(i,n){
        cin >> cost[i];
        rep(j,m){
            cin >> a[i][j];
        }
    }

    int mincost = 0;
    rep(i,n) mincost += cost[i];
    bool exist = false;

    for(int i=0; i < (1 << 12); i++){
        vector<int> sumabi (m,0);
        int costi = 0;
        bool oki = true;

        bitset<12> s(i);
        for(int k=0; k<n; k++){
            if(s.test(k)){
                costi += cost[k];
                rep(j,m){
                    sumabi[j] += a[k][j];
                }
            }
        }

        for(int j=0; j<m; j++){
            if(sumabi[j] < x){
                oki = false;
                break;
            }
        }
            
        if(oki){
            exist = true;
            if(costi < mincost) mincost = costi;
        }
    }

    if(exist) cout << mincost << endl;
    else cout << -1 << endl;
}
