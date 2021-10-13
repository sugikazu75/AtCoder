#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    for(ll a=1; a<=38; a++){
        for(ll b=1; b<=26; b++){
            ll tmp3 = 1;
            ll tmp5 = 1;
            rep(i,a) tmp3 *= 3;
            rep(i,b) tmp5 *= 5; 
            if(tmp3 + tmp5 == n){
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
}
