#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, x, y;
    cin >> n >> x >> y;

    vector <pair <int, int> > ab(n);
    int a_sum = 0, b_sum = 0;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        ab[i] = {a,b};
        a_sum += a;
        b_sum += b;
    }

    if(a_sum < x || b_sum < y){
        cout << -1 << endl;
        return 0;
    }

    sort(all(ab));
    reverse(all(ab));
    int inf = 10000000;
    
    int dp[n+1][x+1][y+1];
    rep(i,n+1) rep(j, x+1) rep(k, y+1) dp[i][j][k] = inf;
    dp[0][0][0] = 0;

    for(int i=0; i<n; i++){
        int a = ab[i].first;
        int b = ab[i].second;
        vector <vector <int> > tmp(x + 1, vector <int>(y + 1, inf));
        for(int j=0; j<x+1; j++){
            for(int k=0; k<y+1; k++){
                if(dp[i][j][k] != inf){
                    tmp[min(x, j + a)][min(y, k + b)] = min(tmp[min(x, j + a)][min(y, k + b)], dp[i][j][k] + 1);
                }
            }
        }

        for(int j=0; j<x+1; j++){
            for(int k=0; k<y+1; k++){
                dp[i+1][j][k] = min(dp[i][j][k], min(dp[i+1][j][k], tmp[j][k]));
            }
        }
    }

    cout << dp[n][x][y] << endl;
}