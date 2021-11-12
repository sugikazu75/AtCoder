#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    if(s[n-1] == 'r' && s[n-2] == 'e') cout << "er" << endl;
    if(n >= 3){
        if(s[n-1] == 't' && s[n-2] == 's' && s[n-3] == 'i') cout << "ist" << endl;
    }
}