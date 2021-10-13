#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    rep(i, s.size()){
        int tmp = s[i] - '0';
        ans = (ans + tmp) % 9;
    }

    if(ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}