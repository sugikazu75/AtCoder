#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >>  s;
    bool ok = true;
    for(int i=0; i<s.size();  i++){
        if(i % 2 == 0 && isupper(s[i])) ok = false;
        if(i % 2 == 1 && !isupper(s[i])) ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}