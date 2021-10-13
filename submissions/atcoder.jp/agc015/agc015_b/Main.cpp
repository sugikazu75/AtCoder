#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;

    ll n = s.size();
    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(s[i] == 'U'){
            ans = ans + (n-1-i) + 2 * i;
        }
        else{
            ans = ans + i + 2 * (n-1-i);
        }
    }

    cout << ans << endl;
}