#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n,m;
    cin >> n >> m;
    vector <long long> h(n);
    rep(i,n) cin >> h[i];

    vector <bool> good(n,true);

    rep(i,m){
        int a , b;
        cin >> a >> b;
        long long ha = h[a-1], hb = h[b-1];
        if(ha > hb){
            good[b-1] = false;
        }
        if(ha < hb){
            good[a-1] = false;
        }
        if(ha == hb){
            good[a-1] = false;
            good[b-1] = false;
        }
    }

    int ans=0;
    rep(i,n){
        if(good[i]){
            ans++;
        }
    }
    cout << ans << endl;
}