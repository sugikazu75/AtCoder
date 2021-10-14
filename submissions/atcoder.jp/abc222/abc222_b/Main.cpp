#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n,p;
    int ans = 0;
    cin >> n >> p;
    rep(i,n){
        int a;
        cin >> a;
        if(a < p){
            ans++;
        }
    }

    cout << ans << endl;
}