#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    vector <ll> t(n);
    vector <ll> k(n);
    vector <vector <ll> > a(n, vector <ll>(0));

    rep(i,n){
        cin >> t[i] >> k[i];
        rep(j, k[i]){
            ll tmp;
            cin >> tmp;
            a[i].push_back(tmp-1);
        }
    }

    queue <ll> q;
    vector <ll> need(n, 0);
    need[n-1] = 1;
    for(ll x:a[n-1]){
        q.push(x);
        need[x] = 1;
    }


    while(!q.empty()){
        ll top = q.front();
        q.pop();
        for(ll x:a[top]){
            if(!need[x]){
                q.push(x);
                need[x] = 1;
            }
        }
    }

    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(need[i]){
            ans += t[i];
        }
    }
    cout << ans << endl;
}