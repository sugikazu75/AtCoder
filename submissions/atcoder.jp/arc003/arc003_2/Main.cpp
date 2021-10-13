#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n;
    cin >> n;
    vector <string> s(n);
    rep(i,n) cin >> s[i];

    for(int i=0; i<n; i++){
        reverse(all(s[i]));
    }
    sort(all(s));

    for(int i=0; i<n; i++){
        reverse(all(s[i]));
    }

    rep(i,n) cout << s[i] << endl;
}
