#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    for(ll i=1; i<=n; i++){
        if(i % 3 != 0 && i % 5 != 0){
            ans += i;
        }
    }

    cout << ans << endl;
}
