#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    if(s[s.size()-1] == 's'){
        cout << s + "es" << endl;
    }
    else{
        cout << s + "s" << endl;
    }
}