#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    string s = to_string(n);
    ll l = s.size();

    ll ans = 0;
    for(int i=3; i<=l-1; i++){
        ans = ans + pow(3, i) - 3 * (pow(2, i) - 2) - 3; 
    }

    for(int i=0; i < pow(3, l); i++){
        string tmp = "";
        ll now = i;
        ll ok = 1;
        rep(j, l){
            if(now % 3 == 0){
                tmp = tmp + "3";
                ok *= 2;
            }
            else if(now % 3 == 1){
                tmp = tmp + "5";
                ok *= 3;
            }
            else{
                tmp = tmp + "7";
                ok *= 5;
            }
            now /= 3;
        }
        if(ok % 30 == 0){
            ll num = stol(tmp);
            if(num <= n) ans++;
        }
    }

    cout << ans << endl;
}