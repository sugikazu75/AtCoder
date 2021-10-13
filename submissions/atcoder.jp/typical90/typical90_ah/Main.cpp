#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,k;
    cin >> n >> k;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    map <ll,ll> table;

    rep(i,n){
        if(table.count(a[i]));
        else table[a[i]] = 0;
    }

    if(table.size() == 1){
        cout << n << endl;
        return 0;
    }

    ll now_kind = 0;
    ll end = 0;
    ll ans = 0;

    for(int i=0; i<n; i++){
        while(end < n){
            if(table.at(a[end]) == 0 && now_kind == k) break;
            if(table.at(a[end]) == 0) now_kind++;
            table.at(a[end])++;
            end++;
        }
        ans = max(ans , end - i);
        if(table.at(a[i]) == 1) now_kind--;
        table.at(a[i])--;
    }

    cout << ans << endl;

}