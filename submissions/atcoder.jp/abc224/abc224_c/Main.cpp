#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];

    ll ans = 0;

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                ll dx1 = x[j] - x[i];
                ll dx2 = x[k] - x[i];
                ll dy1 = y[j] - y[i];
                ll dy2 = y[k] - y[i]; 
                if(dx1 * dy2 - dx2 * dy1 != 0) ans++;
            }
        }
    }

    cout << ans << endl;
}