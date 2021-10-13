#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll t, n;
    cin >> t >> n;

    ll a;

    if(((ll)100*n) % t == 0){
        a = 100*n / t;
    }
    else{
        a = 100*n / t + 1;
    }

    ll ans = (100 + t) * a / 100 - 1;

    cout << ans << endl;
}

