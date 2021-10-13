#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    vector <ll> a(n);
    vector <vector <pair <ll, ll> > > xy(n, vector <pair <ll, ll> >(0));
    rep(i,n){
        cin >> a[i];
        rep(j, a[i]){
            ll x,y;
            cin >> x >> y;
            xy[i].push_back({x-1, y});
        }
    }

    int ans = 0;

    for(ll i=0; i<(1<<15); i++){
        bitset <15> s(i);       //1が正直、0が真意不明
        int now = 0;
        bool ok = true;
        for(int j=0; j<n; j++){
            if(s.test(j)){      //jばんめの人が正直だったら調べる
                now++;
                for(int k=0; k<xy[j].size(); k++){
                    int x = xy[j][k].first;
                    int y = xy[j][k].second;
                    if(y == 0){     //不親切
                        if(s.test(x)) ok = false;
                    }
                    else{
                        if(!s.test(x)) ok = false;
                    }
                }
            }
        }
        if(ok) ans = max(ans, now);
    }  
    cout << ans << endl;
}