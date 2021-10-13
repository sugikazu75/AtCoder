#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll index_o = n;
    ll index_x = n;
    
    ll ans = 0;
    
    for(ll i=n-1; i>=0; i--){
        if(s[i] == 'o'){
            index_o = i;
            if(index_x != n){
                ans += n - index_x;
            }
        }
        else{
            index_x = i;
            if(index_o != n){
                ans += n - index_o;
            }
        }
    }

    cout << ans << endl;
}