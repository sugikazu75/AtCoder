#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=1; i*i <=2 * n; i++){
        if((2*n) % i == 0){
            ll a = i;
            ll b = (2*n) / i;
            if((a+b-1) % 2 == 0 && (a-b+1) % 2 == 0){
                ans ++;
            }
            a = (2*n) / i;
            b = i;
            if((a+b-1) % 2 == 0 && (a-b+1) % 2 == 0){
                ans ++;
            }

        }
    }

    cout << ans << endl;
}