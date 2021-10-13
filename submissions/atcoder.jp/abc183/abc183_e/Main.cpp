#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

ll mod = 1000000007;

ll pow(ll x, ll n){
    ll ans = 1;
    rep(i,n){
        ans = (ans * x) % mod;
    }
    return ans % mod;
}

int main(){
    int h, w;
    cin >> h >> w;
    
    vector <vector <char> > maze(h, vector <char> (w));
    rep(i,h){
        string s;
        cin >> s;
        rep(j, w){
            maze[i][j] = s[j];
        }
    }

    vector <vector <ll> > r(h+1, vector <ll> (w+1, 0));
    vector <vector <ll> > d(h+1, vector <ll> (w+1, 0));
    vector <vector <ll> > rd(h+1, vector <ll> (w+1, 0));
    vector <vector <ll> > ans(h+1, vector <ll> (w+1, 0));

    ans[1][1] = 1;

    for(ll i=1; i<=h; i++){
        for(ll j=1; j<=w; j++){
            if(i == 1 && j == 1) continue;
            if(maze[i-1][j-1] == '#'){
                r[i][j] = 0;
                d[i][j] = 0;
                rd[i][j] = 0;
                ans[i][j] = 0;
                continue;
            }
            d[i][j] = (d[i-1][j] + ans[i-1][j]) % mod;
            r[i][j] = (r[i][j-1] + ans[i][j-1]) % mod;
            rd[i][j] = (rd[i-1][j-1] + ans[i-1][j-1]) % mod;
            ans[i][j] = (d[i][j] + r[i][j] + rd[i][j]) % mod;
        }
    }

    cout << ans[h][w] % mod << endl;
    

    // rep(i, h){
    //     rep(j, w){
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}