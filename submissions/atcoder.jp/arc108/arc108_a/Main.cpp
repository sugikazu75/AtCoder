#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll s,p;
    cin >> s >> p;
    bool ok = false;
    for(ll i=1; i*i<=p; i++){
        if(p % i == 0){
            ll j = p / i;
            if(i + j == s) ok = true;
            }
        }
    
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}