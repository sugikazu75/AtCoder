#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,m;
    cin >> n >> m;
    vector <vector <ll> > a(n, vector <ll> (m));
    rep(i,n){
        rep(j,m){
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for(int i=0; i<m-1; i++){
        for(int j=i+1; j<m; j++){
            ll tmpans = 0;
            for(int k=0; k<n; k++){
                tmpans += max(a[k][i], a[k][j]);
            }
            ans = max(ans , tmpans);
        }
    }
    cout << ans << endl;

}