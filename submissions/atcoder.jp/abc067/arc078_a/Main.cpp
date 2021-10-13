#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    vector<long> a(n);
    rep(i,n) cin >> a[i];
    
    long suma = a[0], sumb = 0;
    for(int i=1; i<n; i++) sumb += a[i];

    long ans = abs(suma - sumb);

    for(int i=1; i<n-1; i++){
        suma += a[i];
        sumb -= a[i];
        if(abs(suma - sumb) < ans) ans=abs(suma - sumb);
    }

    cout << ans << endl;
}
