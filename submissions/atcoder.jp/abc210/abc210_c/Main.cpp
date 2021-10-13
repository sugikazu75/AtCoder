#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,k;
    cin >> n >> k;

    vector <ll> c(n);
    rep(i,n) cin >> c[i];

    map <ll, ll> color_cnt;

    for(ll i=0; i<k; i++){
        if(!color_cnt.count(c[i])) color_cnt[c[i]] = 1;
        else color_cnt.at(c[i])++;
    }

    ll ans = color_cnt.size();
    ll cnt = ans;
    for(ll i=k; i<n; i++){
        if(!color_cnt.count(c[i])){
            color_cnt[c[i]] = 1;
            ans++;
        }
        else if(color_cnt.at(c[i]) == 0){
            color_cnt.at(c[i])++;
            ans++;
        }
        else color_cnt.at(c[i])++;
        
        color_cnt.at(c[i - k])--;
        if(color_cnt.at(c[i-k]) == 0) ans--;

        cnt = max(cnt, ans);
    }

    cout << cnt << endl;

}