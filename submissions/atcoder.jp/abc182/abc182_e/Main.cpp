#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll h,w,n,m;
    cin >> h >> w >> n >> m;

    vector <vector <ll> > table(h, vector <ll>(w,0));
    vector <ll> A(n),B(n);
    rep(i,n){//light
        ll a,b;
        cin >> a >> b;
        table[a-1][b-1] = 1;
        A[i] = a;
        B[i] = b;
    }
    rep(i,m){//block
        ll c, d;
        cin >> c >> d;
        table[c-1][d-1] = -1;
    }

    vector <vector <ll> > okh(h,vector <ll> (w,0)), okw(h,vector <ll>(w,0));

    rep(i,n){
        ll tmpa = A[i];
        ll tmpb = B[i];
        if(okh[tmpa-1][tmpb-1] == 1) continue;//visited ans ok
        else{
            for(int j=tmpa-1; j>=0; j--){
                if(table[j][tmpb-1] != -1) okh[j][tmpb-1] = 1;
                else break;
            }
            for(int j=tmpa-1; j<h; j++){
                if(table[j][tmpb-1] != -1) okh[j][tmpb-1] = 1;
                else break;
            }
        }
    }
    rep(i,n){
        ll tmpa = A[i];
        ll tmpb = B[i];
        if(okw[tmpa-1][tmpb-1] == 1) continue;
        else{
            for(int j=tmpb-1; j>=0; j--){
                if(table[tmpa-1][j] != -1) okw[tmpa-1][j] = 1;
                else break;
            }
            for(int j=tmpb-1; j<w; j++){
                if(table[tmpa-1][j] != -1) okw[tmpa-1][j] = 1;
                else break;
            }
        
        }
    }

    ll ans = 0;
    rep(i,h){
        rep(j,w){
            if(okh[i][j] == 1 || okw[i][j] == 1) ans++;
        }
    }
    cout << ans << endl;
}