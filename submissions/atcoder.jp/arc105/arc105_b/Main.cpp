#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;


int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}


int lcm(int a, int b){
    return a / gcd(a,b) * b;    //オーバーフロー防止
}


int main(){
    int n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    sort(all(a));

    if(n == 1){
        cout << a[0] << endl;
        return 0;
    }

    ll ans = gcd(a[0],a[1]);

    for(int i=0; i<n; i++){
        ans = gcd(ans, a[i]);
    }

    cout << ans << endl;
}