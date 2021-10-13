#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int ans1 = 0;
    int ans2 = 0;

    int n = s.size();
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }

    rep(i,n){
        if(i % 2 == 0){
            if(s[i] != s[0]) ans1++;
        }
        else{
            if(s[i] == s[0]) ans1++;
        }
    }
    
    string t = s;
    reverse(all(t));
    rep(i,n){
        if(i % 2 == 0){
            if(t[i] != t[0]) ans2++;
        }
        else{
            if(t[i] == t[0]) ans2++;
        }
    }

    cout << min(ans1, ans2) << endl;
}