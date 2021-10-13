#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector <char> t;
    ll ans = n;

    for(int i=0; i<n; i++){
        t.push_back(s[i]);
        if(t.size() >= 3){
            if(t[t.size()-1] == 'x' && t[t.size()-2] == 'o' && t[t.size()-3] == 'f'){
                ans -= 3;
                t.erase(t.begin()+t.size()-3, t.begin()+t.size());
            }
        }
    }

    cout << ans << endl;

    

}