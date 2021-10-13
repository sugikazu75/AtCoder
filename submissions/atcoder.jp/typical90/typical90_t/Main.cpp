#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll ans = 1;
    rep(i,b){
        ans *= c;
    }
    if(ans > a) cout << "Yes" << endl;
    else cout << "No" << endl;
} 
