#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector <pair<ll,ll>> point(n);

    rep(i,n){
        ll x,y;
        cin >> x >> y;
        point[i] = make_pair(x,y);
    }

    map <pair<ll,ll> , ll> table;
    vector <pair <ll,ll> > factor(0);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(point[i].second == point[j].second){
                ll x1 = min(point[i].first, point[j].first);
                ll x2 = max(point[i].first, point[j].first);
                if(!table.count({x1, x2})){
                    table[{x1, x2}] = 1;
                    factor.push_back({x1, x2});
                }
                else{
                    table.at({x1, x2})++;
                }
            }
        }
    }
    ll ans = 0;
    for(auto x:factor){
        ans += table.at(x) * (table.at(x) - 1) / 2;
    }

    cout << ans << endl;
}
