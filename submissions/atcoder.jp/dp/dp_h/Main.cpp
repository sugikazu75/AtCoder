#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll h, w;
    cin >> h >> w;
    vector <vector <char> > maze(h + 1, vector <char>(w + 1));
    ll dp[h + 1][w + 1];
    ll mod = 1000000007;

    rep(i, h + 1){
        rep(j, w + 1) dp[i][j] = 0;
    }
    dp[1][1] = 1;

    rep(i, h){
        string s;
        cin >> s;
        rep(j, w){
            maze[i + 1][j + 1] = s[j];
        }
    }

    for(ll i=1; i<=h; i++){
        for(ll j=1; j<=w; j++){
            if(i == 1 && j == 1) continue;
            if(maze[i][j] == '#') dp[i][j] = 0;
            else dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }
    }

    cout << dp[h][w] << endl;
}