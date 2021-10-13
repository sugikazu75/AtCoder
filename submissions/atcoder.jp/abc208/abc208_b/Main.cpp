#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll p;
    cin >> p;

    vector <ll> coin(10);
    ll now = 1;
    rep(i,10){
        coin[i] = now * (i+1);
        now *= (i+1); 
    }

    ll ans = 0;

    ll now_coin = 9;
    while(p > 0){
        if(p >= coin[now_coin]){
            p -= coin[now_coin];
            ans++;
        }
        
        else{
            now_coin--;
        }
    }

    cout << ans << endl;

}
    
