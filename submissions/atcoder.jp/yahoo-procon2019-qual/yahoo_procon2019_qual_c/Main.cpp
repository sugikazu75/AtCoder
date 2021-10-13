#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll k,a,b;
    cin >> k >> a >> b;
    
    if(b < a + 2){
        cout <<  k + 1 << endl;
        return 0;
    }
    else{
        if(k < a - 1) cout << k + 1 << endl;
        else{
            ll cnt = (k-(a-1))/2;
            ll ans = a + cnt * (b - a);
            if((k+1-a) % 2 != 0) ans++;
            cout << ans << endl;
        }
    }
}