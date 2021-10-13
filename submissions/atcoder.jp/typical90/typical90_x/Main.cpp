#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;


int main(){
    int n;
    ll k;
    cin >> n >> k;
    vector <ll> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    ll tmp = 0;
    rep(i,n){
        tmp += abs(a[i] - b[i]);
    }
    if(k >= tmp && (k-tmp) % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
