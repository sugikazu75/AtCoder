#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,k,a;
    cin >> n >> k >> a;

    int ans = a - 1;
    for(int i=0; i<k; i++){
        ans = a - 1  + i;
    }

    cout << ans % n + 1 << endl;
}