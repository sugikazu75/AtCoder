#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector <long long> a(n);
    rep(i,n) cin >> a[i];

    if(n == 1){
        cout << 0 << endl;
        return 0;
    }

    long long cur = a[0];
    long long ans = 0; 
    for(int i=1; i<=n-1 ; i++){
        if(cur > a[i]){
            ans = ans + cur - a[i];
        }
        else{
            cur = a[i];
        }
    }

    cout << ans << endl;
}