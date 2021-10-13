#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    string ans = "";
    rep(i,n){
        cout << s[i] << t[i];
    }

    cout << endl;
}