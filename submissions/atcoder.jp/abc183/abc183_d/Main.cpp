#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,w;
    cin >> n >> w;

    vector <ll> water(200010,0);

    rep(i,n){
        ll s,t,p;
        cin >> s >> t >> p;
        water[s] += p;
        water[t] -= p;
    }

    ll tmp = 0;
    rep(i,water.size()){
        tmp += water[i];
        water[i] = tmp;
    } 
    bool ok = true;
    rep(i,water.size()){
        if(water[i] > w){
            ok = false;
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}