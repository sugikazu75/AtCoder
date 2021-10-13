#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    vector <ll> a(3);
    rep(i,3) cin >> a[i];
    if((a[0] * a[1] * a[2]) % 2 == 0){
        cout << 0 << endl;
    }

    else{
        sort(all(a));
        cout << a[0] * a[1] << endl;    
    }
}