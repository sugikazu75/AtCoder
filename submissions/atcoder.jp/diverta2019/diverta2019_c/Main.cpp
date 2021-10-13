#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0;

    ll ans = 0;
    rep(i,n){
        string s;
        cin >> s;
        if(s[0] == 'B' && s[s.size()-1] == 'A') c++;
        else if(s[0] == 'B') b++;
        else if(s[s.size()-1] == 'A') a++;
        else;

        for(int i=0; i<s.size()-1; i++){
            if(s[i] == 'A' && s[i+1] == 'B') ans++;
        }
    }

    if(c == 0){
        cout << ans + min(a,b) << endl;
    }
    else{
        if(a+b>0){
            cout << ans + c + 1 + min(a-1,b-1) << endl;
        }
        else{
            cout << ans + c - 1 << endl;
        }
    }

}