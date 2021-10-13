#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    ll ans = 0;
    rep(i, s.size()){
        if(s[i] == '2') ans++;
    }

    cout << ans << endl;
}