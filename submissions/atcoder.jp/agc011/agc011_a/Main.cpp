#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,c,k;
    cin >> n >> c >> k;
    vector <ll> time(n);
    rep(i,n) cin >> time[i];

    sort(all(time));

    ll init = 0;
    ll departure = time[init] + k;
    ll ans = 0;
    
    for(int i=0; i<n; i++){
        if(time[i] > departure || init+c <= i){
            init = i;
            departure = time[i] + k;
            ans++;
        }
        //cout << init << " " << departure << endl;
    }

    cout << ans + 1 << endl;

}