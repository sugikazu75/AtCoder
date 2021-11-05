#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h,w;
    cin >> h >> w;

    vector <vector <ll>> table (h, vector <ll> (w));
    rep(i,h) rep(j,w) cin >> table[i][j];

    for(int i1=0; i1<h-1; i1++){
        for(int i2=i1+1; i2<h; i2++){
            for(int j1=0; j1<w-1; j1++){
                for(int j2=j1+1; j2<w; j2++){
                    if(table[i1][j1]+table[i2][j2] > table[i2][j1]+table[i1][j2]){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;
}