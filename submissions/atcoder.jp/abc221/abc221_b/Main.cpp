#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s, t;
    cin >> s >> t;

    ll n = s.size();

    bool used = false;

    for(int i=0; i<n-1; i++){
        if(s[i] != t[i]){
            char tmp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = tmp;
            break; 
        }
    }

    if(s == t){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}