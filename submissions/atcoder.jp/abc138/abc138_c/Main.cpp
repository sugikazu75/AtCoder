#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <double> v(n);
    rep(i,n) cin >> v[i];
    sort(all(v));

    double ans=v[0];
    for(int i=1; i<n; i++){
        ans = (ans + v[i])/2;
    }

    cout << fixed << setprecision(10);
    cout << ans << endl;

}
