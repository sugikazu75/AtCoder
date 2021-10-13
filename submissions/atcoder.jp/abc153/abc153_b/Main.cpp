#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll h,n;
    cin >> h >> n;
    vector <ll> a(n);
    ll sum = 0;
    rep(i,n){
        ll tmp;
        cin >> tmp;
        sum += tmp;
    }

    if(sum >= h) cout << "Yes" << endl;
    else cout << "No" << endl;
}