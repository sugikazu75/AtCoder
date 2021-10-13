#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <vector <int> > a(n, vector <int> (n));
    rep(i,n){
        rep(j,n){
            cin >> a[i][j];
        }
    }

    int m;
    cin >> m;
    vector <vector <int > > xy(n, vector <int> (n,0));
    rep(i,m){
        int x,y;
        cin >> x >> y;
        xy[x-1][y-1] = 1;
        xy[y-1][x-1] = 1;
    }

    vector <int> runner(n);
    rep(i,n) runner[i] = i + 1;
    int ans = 1000000;
    bool ok;
    do{
        int now = 0;
        ok = true;
        for(int i=0; i<n-1; i++){
            int pre = runner[i];
            int aft = runner[i+1];
            if(xy[pre-1][aft-1]) ok = false;
        }
        if(ok){
            for(int i=0; i<n; i++){
                now += a[runner[i]-1][i];
            }
            ans = min(ans, now);
        }
        else continue;
    }while(next_permutation(all(runner)));

    if(ans != 1000000) cout << ans << endl;
    else cout << -1 << endl;
}