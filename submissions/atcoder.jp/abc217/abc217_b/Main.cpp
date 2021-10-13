#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    vector <string> s = {"ABC", "ARC", "AGC", "AHC"};
    int ans = 6;
    rep(i,3){
        string t;
        cin >> t;
        if(t == "ARC") ans -= 1;
        else if(t=="AGC") ans -=2;
        else if(t=="AHC") ans -= 3; 
    }

    cout << s[ans] << endl;
}
