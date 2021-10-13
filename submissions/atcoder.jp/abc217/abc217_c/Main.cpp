#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector <ll> p(n), q(n);
    rep(i,n){
        cin >> p[i];
    }

    rep(i,n){
        q[p[i] - 1] = i + 1;
    }

    rep(i,n){
        cout << q[i] << " ";
    }
    cout << endl;
}
