#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    vector <string> s(3);
    rep(i,3) cin >> s[i];

    string t;
    cin >> t;
    
    string ans = "";

    rep(i, t.size()){
        if(t[i] == '1') ans = ans + s[0];
        else if(t[i] == '2') ans = ans + s[1];
        else ans = ans + s[2];
    }

    cout << ans << endl;
}