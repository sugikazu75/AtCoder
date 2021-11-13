#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector <int> s(n);
    rep(i,n) cin >> s[i];

    int ans = n;
    rep(i,n){
        bool ok = false;
        for(int a=1; a<210; a++){
            for(int b=1; b<210; b++){
                if(4*a*b + 3*a + 3*b == s[i]) ok = true;
            }
        }
        if(ok) ans--;
    }
    cout << ans << endl;
}