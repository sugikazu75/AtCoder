#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,m,k;
    cin >> n >> m >> k;
    vector <ll> suma(n+1,0),sumb(m+1,0);
    ll nowa = 0;
    ll nowb = 0;
    rep(i,n){
        ll tmpa;
        cin >> tmpa;
        nowa += tmpa;
        suma[i+1] = nowa;
    }
    rep(i,m){
        ll tmpb;
        cin >> tmpb;
        nowb += tmpb;
        sumb[i+1] = nowb;
    }

    ll ans = 0;

    ll good = m;
    for(int i=0; i<n+1; i++){
        if(suma[i] > k) break;
        while(sumb[good] + suma[i] > k && good>=1) good--;
        if(suma[i] + sumb[good] <= k){
            ans = max(ans, i + good);
        }
    }
    
    cout << ans << endl;
}