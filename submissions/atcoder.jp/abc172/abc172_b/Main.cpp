#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    string s,t;
    cin >> s >> t;

    int ans = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] != t[i]) ans ++;
    }

    cout << ans << endl;
}