#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    string s;
    cin >> s;

    int ans = 0;
    char tmp = s[0];
    for(int i=0; i<s.size(); i++){
        if(tmp != s[i]){
            ans ++;
            tmp = s[i];
        }
    }

    cout << ans << endl;
}
