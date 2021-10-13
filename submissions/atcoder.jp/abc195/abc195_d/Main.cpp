#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,m,q;
    cin >> n >> m >> q;
    vector <pair <ll , ll> > wv(n);
    vector <ll> w(n) , v(n);
    rep(i,n){
        cin >> w[i] >> v[i];
        wv[i].first = w[i];
        wv[i].second = v[i];
    }
    sort(all(wv));
    vector <ll> box(m);
    rep(i,m) cin >> box[i];

    rep(i,q){
        ll l,r;
        cin >> l >> r;
        ll tmpans = 0;
        vector <bool> useful (n , true);
        vector <ll> tmpbox(0);
        rep(i,m){
            if(l-1<=i && i<=r-1) continue;
            else tmpbox.push_back(box[i]);
        }
        sort(all(tmpbox));
        for(int j=0; j<tmpbox.size(); j++){
            ll tmp = 0;
            bool find = false;
            ll now = 0;
            for(int k=0; k<n; k++){
                if(tmpbox[j] >= wv[k].first){
                    if(tmp < wv[k].second && useful[k]){
                        tmp = wv[k].second;
                        find = true;
                        now = k;
                    }
                }
            }
            if(find){
                useful[now] = false;
            }
            
            tmpans += tmp;
        }
        cout << tmpans << endl;

    }
} 
