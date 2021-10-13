#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll x;
    cin >> x;

    ll roop  = x / 11;

    if(x - roop * 11 > 6){
        cout << 2 * roop + 2 << endl;
    }
    else if(x - roop * 11 > 0) cout << 2 * roop + 1 << endl;
    else cout << roop * 2 << endl;
}
