#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n,k;
    cin >> n >> k;

    vector <int> p(n);
    rep(i,n) cin >> p[i];

    sort(all(p));

    int ans=0;

    for(int i=0; i<k; i++){
        ans += p[i];
    }

    cout << ans << endl;
}
