#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    rep(i,t){
        ll l,r;
        cin >> l >> r;
        if(2 * l > r){
            cout << 0 << endl;
        }
        else{
            cout << (r - 2*l + 2) * (r - 2*l + 1) / 2 << endl;
        }
    }
} 
