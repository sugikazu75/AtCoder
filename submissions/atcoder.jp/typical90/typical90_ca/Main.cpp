#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h, w;
    cin >> h >> w;
    vector <vector <int> > a(h, vector <int>(w)), b(h, vector <int>(w));

    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
        }
    }
    rep(i,h){
        rep(j,w){
            cin >> b[i][j];
        }
    }

    ll cnt = 0;
    for(int i=0; i<h-1; i++){
        for(int j=0; j<w-1; j++){
            cnt += abs(a[i][j] - b[i][j]);
            a[i+1][j] -= a[i][j] - b[i][j];
            a[i+1][j+1] -= a[i][j] - b[i][j];
            a[i][j+1] -= a[i][j] - b[i][j];
            a[i][j] = 0;
        }
    }

    bool ok = true;
    for(int i=0; i<h; i++){
        if(a[i][w-1] != b[i][w-1]) ok = false;
    }
    for(int j=0; j<w; j++){
        if(a[h-1][j] != b[h-1][j]) ok = false;
    }

    if(ok){
        cout << "Yes" << endl;
        cout << cnt << endl;
    }
    else cout << "No" << endl;
}