#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> x(n), l(n);
    rep(i,n) cin >> x[i] >> l[i];
    vector <pair <ll, ll> >  arm(n);     //right , left

    rep(i,n){
        arm[i] = make_pair(x[i]+l[i] , x[i]-l[i]);
    }

    sort(all(arm));

    ll now = -100000000000;
    ll ans = 0;
    for(int i=0; i<n; i++){
        if(arm[i].second >= now){
            ans++;
            now = arm[i].first;
        }
    }

    cout << ans << endl;

}

