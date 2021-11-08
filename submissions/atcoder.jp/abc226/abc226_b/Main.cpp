#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string n;
    getline(cin, n);
    int N = stoi(n);
    map <string, int> table;
    ll ans = 0;
    rep(i,N){
        string s;
        getline(cin, s);
        // cout << s << endl;
        if(!table.count(s)){
            ans++;
            table[s] = 1;
        }
    }

    cout << ans << endl;
}