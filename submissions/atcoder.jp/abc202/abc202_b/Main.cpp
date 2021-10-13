#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    vector <char> ans(n);

    for(int i = n-1; i>=0; i--){
        if(s[i] == '6') ans[n-1 - i] = '9';
        else if(s[i] == '9') ans[n-1-i] = '6';
        else ans[n-1-i] = s[i];
    }

    rep(i,n) cout << ans[i];
    cout << endl;
}

