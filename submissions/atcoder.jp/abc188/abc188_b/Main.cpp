#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    vector <ll> a(n),b(n);
    rep(i,n){
        cin >> a[i];
    }
    rep(i,n){
        cin >> b[i];
    }
    rep(i,n){
        ans += a[i]*b[i];
    }

    if(ans == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
