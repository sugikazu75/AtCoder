#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    vector <vector <ll> > b(n, vector<ll>(m));
    rep(i, n) rep(j, m) cin >> b[i][j];
    // rep(i, n) rep(j, m) b[i][j]--;

    rep(i, n){
        rep(j, m){
            if(b[i][j] != b[0][0] + 7 * i + j){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    if(b[0][0] % 7 == 0){
        if(m != 1){
            cout << "No" << endl;
            return 0;
        }
    }
    else{
        if(b[0][0] % 7 + m > 8){
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    
}