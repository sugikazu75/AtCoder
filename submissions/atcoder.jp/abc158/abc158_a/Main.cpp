#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    if(s[0]  == s[1] && s[1] == s[2]) cout << "No" << endl;
    else cout << "Yes" << endl;
}