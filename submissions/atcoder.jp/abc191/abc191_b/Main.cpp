#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    vector <ll> ans(0);
    rep(i,n){
        if(a[i] != x){
            ans.push_back(a[i]);
        }
    }

    if(ans.size() == 0) cout << endl;
    else{
        for(int i=0; i<ans.size()-1; i++){
            cout << ans[i] << " " ;
        }
        cout << ans[ans.size()-1] << endl;
    }
}