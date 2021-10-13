#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    rep(i,n) cin >> a[i];

    int ans = 0;

    
    for(int i=1; i <= n; i+=2){
        if(a[i-1] % 2 == 1){
            ans ++;
        }
    }
    cout << ans << endl;
}