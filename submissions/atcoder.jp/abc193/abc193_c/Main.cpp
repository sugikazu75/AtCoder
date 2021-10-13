#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    map <ll,ll> table;

    for(ll a = 2; a < 100000; a++){
        if(a * a > n) break;
        ll tmp = a * a;
        while(tmp <= n){
            table[tmp] = 1;
            tmp *= a;
        }
    }
    cout << n - table.size() << endl;
}