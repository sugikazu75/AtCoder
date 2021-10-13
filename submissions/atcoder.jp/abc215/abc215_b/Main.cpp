#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll now = 0;
    ll ans = 1;

    while(ans <= n){
        ans *= 2;
        now++;
    }

    cout << now - 1 << endl;
}