#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> exist(n, 0);

    rep(i,n){
        ll a;
        cin >> a;
        exist[a-1]++;
    }
    rep(i,n){
        if(exist[i] > 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
