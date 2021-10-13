#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    bool prime = 0;
    ll cnt = 0;
    for(ll i=2; i*i <= n; i++){
        while(n % i == 0){
            n = n / i;
            cnt++;
        }
    }
    if(n != 1) cnt++;

    ll tmp = 1;
    ll ans = 0;
    while(cnt > tmp){
        tmp *= 2;
        ans++;
    }
    //cout << cnt << endl;
    cout << ans << endl;

}