#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> b(16);
    ll now = 1;
    rep(i,16){
        b[i] = now;
        now *= 10;
    }


    ll ans = 0;
    if(n == b[15]){
        ans = 5 + 4 * (b[15] - b[12]) + 3 * (b[12] - b[9]) + 2 * (b[9] - b[6]) + (b[6] - b[3]);
    }
    else if(n >= b[12]){
        ans = 4 * (n + 1 - b[12]) + 3 * (b[12] - b[9]) + 2 * (b[9] - b[6]) + (b[6] - b[3]);
    }
    else if(n >= b[9]){
        ans = 3 * (n + 1 - b[9]) + 2 * (b[9] - b[6]) + (b[6] - b[3]);
    }
    else if(n >= b[6]){
        ans = 2 * (n + 1 - b[6]) + (b[6] - b[3]);
    }
    else if(n >= b[3]){
        ans = (n + 1 - b[3]);
    }
    else ans = 0;

    cout << ans << endl;

} 
