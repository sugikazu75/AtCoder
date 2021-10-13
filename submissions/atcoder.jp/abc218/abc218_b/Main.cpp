#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    vector <int> p(26);
    rep(i,26) cin >> p[i];

    string s = "abcdefghijklmnopqrstuvwxyz";

    rep(i,26){
        cout << s[p[i]-1];
    }
    cout << endl;
}
