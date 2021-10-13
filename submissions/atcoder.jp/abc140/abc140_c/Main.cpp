#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <int> b(n-1);
    rep(i,n-1) cin >> b[i];

    vector <int> ans(n);
    ans[0] = b[0];
    ans[n-1] = b[n-2];
    for(int i=1; i<n-1; i++){
        ans[i] = min(b[i-1], b[i]);
    }

    int sum=0;
    rep(i,n) sum += ans[i];
    cout << sum << endl;

}
