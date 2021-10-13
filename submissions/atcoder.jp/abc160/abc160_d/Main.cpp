#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,x,y;
    cin >> n >> x >> y;
    ll left = x - 1;
    ll right = n - y;
    ll roop = y - x + 1;

    vector <vector <int> > dis(n+1,vector <int>(n+1));

    for(ll i=1; i<=n-1; i++){
        for(ll j=i+1; j<=n; j++){
            if(j <= x){//002
                dis[i][j] = j - i;
            }
            else if(i <= x && x <= j && j <= y){//011
                dis[i][j] = x-i + min(j-x, roop - (j-x));
            }
            else if(x <= i && j <= y){//020
                dis[i][j] = min(j-i, roop-(j-i));
            }   
            else if(x <= i && i <= y && y <= j){//110
                dis[i][j] = (j-y) + min(y-i, roop-(y-i));
            }
            else if(i <= x && y <= j){//101
                dis[i][j] = (x-i) + 1 + (j - y);
            }
            else if(x <= i){//200
                dis[i][j] = j - i;
            }
            else;
        }
    }

    vector <ll> ans(n,0);
    for(ll i=1; i<=n-1; i++){
        for(ll j=i+1; j<=n; j++){
            ans[dis[i][j]]++;
        }
    }
    for(ll i=1; i<=n-1; i++){
        cout << ans[i] << endl;
    }
    
}