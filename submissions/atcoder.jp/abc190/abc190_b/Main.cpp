#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,s,d;
    cin >> n >> s >> d;
    bool ok = false;
    rep(i,n){
        ll x,y;
        cin >> x >> y;
        if(x < s && y > d) ok = true;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}