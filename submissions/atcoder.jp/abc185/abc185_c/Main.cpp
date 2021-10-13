#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll l;
    cin >> l;

    ll ans = 1;
    for(ll i = 0; i<11; i++){
        ans = ans * (l-1-i) / (i+1);
    }
    cout << ans <<endl;
}