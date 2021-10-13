#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    set<ll> ans;

    for(ll i=1; i*i<=n; i++){
        if(n % i == 0){
            ans.insert(n/i);
            ans.insert(i);
        }
    }

    for(auto x:ans){
        cout << x << endl;
    }


}