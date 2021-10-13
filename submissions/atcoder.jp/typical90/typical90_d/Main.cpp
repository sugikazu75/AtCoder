#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll h,w;
    cin >> h >> w;
    vector <vector <ll> > table(h, vector <ll>(w));
    rep(i,h){
        rep(j,w){
            cin >> table[i][j];
        }
    }
    vector <ll> gyou(h,0);
    vector <ll> retu(w,0);
    rep(i,h){
        rep(j,w){
            gyou[i] += table[i][j];
            retu[j] += table[i][j];
        }
    }
    vector <vector <ll>> ans(h, vector <ll> (w,0));
    rep(i,h){
        rep(j,w){
            ans[i][j] = gyou[i] + retu[j] - table[i][j];
        }
    }

    rep(i,h){
        rep(j,w){
            if(j == w-1){
                cout << ans[i][j] << endl;
            }
            else{
                cout << ans[i][j] << " ";
            }
        }
    }
} 
