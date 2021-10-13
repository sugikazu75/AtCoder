#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll k;
    cin >> k;
    ll ans = 0;
    for(int a = 1; a<=k; a++){
        for(int b = 1; b<=k/a; b++){
            for(int c = 1; c<=k/(a*b); c++){
                if(a * b * c <= k) ans++;
            }
        }
    }
    cout << ans << endl;
}