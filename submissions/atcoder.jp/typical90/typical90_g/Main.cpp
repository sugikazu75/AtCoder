#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];
    ll q;
    cin >> q;
    vector <ll> b(q);
    rep(i,q) cin >> b[i];

    sort(all(a));

    rep(i,q){
        ll key = b[i];
        int l = -1;
        int r = n;
        int mid = (l + r) / 2;
        while(abs(l - r) > 1){
            mid = (l + r) / 2;
            if(key >= a[mid]) l = mid;
            else r = mid;
        }
        if(l == -1) cout << abs(a[0] - key) << endl;
        else if(r == n) cout << abs(a[n-1] - key) << endl;
        else cout << min(abs(a[l] - key), abs(a[r] - key)) << endl;
    }
} 
