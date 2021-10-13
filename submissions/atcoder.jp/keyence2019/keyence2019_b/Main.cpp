#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;

    string k = "keyence";
    bool ok =  true;
    for(int i=0; i<7; i++){
        if(s[i] != k[i]) ok = false;
    }
    if(ok){
        cout << "YES" << endl; 
        return 0;
    } 
    ok =  true;
    for(int i=s.size()-7; i<s.size(); i++){
        if(s[i] != k[i - s.size() + 7]) ok = false;
    }
    if(ok){
        cout << "YES" << endl;
        return 0;
    }

    int pre;
    int aft;
    for(int i=0; i<7; i++){
        if(s[i] != k[i]){
            pre = i;
            break;
        }
    }

    for(int i=0; i<7; i++){
        if(s[s.size() - 1 - i] != k[6 - i]){
            aft = i;
            break;
        } 
    }

    if(pre + aft >= 7) cout << "YES" << endl;
    else cout << "NO" << endl;
}