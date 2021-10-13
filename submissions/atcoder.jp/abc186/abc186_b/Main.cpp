#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int h,w;
    cin >> h >> w;
    int m = 1000;
    vector <vector <int> > table(h,vector<int>(w));
    rep(i,h){
        rep(j,w){
            int a;
            cin >> a;
            table[i][j] = a;
            m = min(a,m);
        }
    }

    int ans = 0;
    rep(i,h){
        rep(j,w){
            ans += (table[i][j] - m);
        }
    }

    cout  << ans << endl;
}