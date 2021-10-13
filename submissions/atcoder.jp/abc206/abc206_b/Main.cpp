#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    for(int i=1; i<=n; i++){
        ll ans = i * (i + 1) / 2;
        if(ans >= n){
            cout << i << endl;
            return 0;
        }
    }
}
