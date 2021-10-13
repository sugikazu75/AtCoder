#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,k;
    cin  >> n >> k;

    ll ans = 0;

    for(int e=2; e<=2*n; e++){
        int f = e - k;
        if(!(2<=f && f<=2*n)) continue;

        ll ce, cf;

        if(e >= n+1) ce = 2*n - (e-1);
        else ce = e-1;

        if(f >= n+1) cf = 2*n - (f-1);
        else cf = f-1;

        ans += ce * cf;
    }


    cout << ans << endl;
}