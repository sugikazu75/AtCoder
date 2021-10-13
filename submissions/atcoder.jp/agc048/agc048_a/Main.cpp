#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int t;
    cin >> t;
    rep(i,t){
        string s;
        cin >> s;
        int cnt = 0;

        bool existnota = false;
        rep(j,s.size()) if(s[j] != 'a') existnota = true;
        
        if(!existnota) cout << -1 << endl;

        else{//a以外が存在
            if(s <= "atcoder"){
                bool find = false;
                for(int k=0; k<s.size(); k++){
                    if(s[k] != 'a'){
                        find = true;
                        if(s[k] > 't') cnt = k-1;
                        else cnt = k;
                    }
                    if(find) break;
                }
                cout << cnt << endl;
            }

            else cout << 0 << endl;            
        }
    }
}
