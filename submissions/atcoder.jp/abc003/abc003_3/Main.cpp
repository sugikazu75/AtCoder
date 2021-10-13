#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n,k;
    cin >> n >> k;
    vector <long double> r(n);
    rep(i,n){
        cin >> r[i];
    }

    sort(all(r));
    long double ans = 0.0;
    for(int i=n-k; i<=n-1; i++){
        ans = (ans + r[i]) / 2.0;
    }

    cout << setprecision(15);
    cout << ans << endl;
}