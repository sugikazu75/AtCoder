#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    ll ans = 0;

    map <ll,ll> j_Aj;

    for(int i=n-1; i>=0; i--){
        if(j_Aj.count(i + a[i])){
            ans += j_Aj.at(i+a[i]);
        }
        if(j_Aj.count(i-a[i])){
            j_Aj.at(i-a[i])++;
        }
        else{
            j_Aj[i-a[i]] = 1;
        }
    }

    cout << ans << endl;

}