#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s,t;
    cin >> s >> t;

    int S = s.size();
    int T = t.size();

    vector <string> ans;

    //i = start
    for(int i=0; i<=S-T; i++){
        string  tmp = s;
        bool oki = true;
        for(int j=0; j<T; j++){
            if(s[i+j] != t[j] && s[i+j] != '?'){
                oki = false;
            }
        }
        if(oki){
            for(int j=0; j<T; j++){
                tmp[i+j] = t[j];
            }
            for(int j=0; j<S; j++){
                if(tmp[j] == '?'){
                    tmp[j] = 'a';
                }
            }
            ans.push_back(tmp);
        }
    }
    
    if(ans.size() == 0){
        cout << "UNRESTORABLE" << endl;
    }
    else{
        sort(all(ans));
        cout << ans[0] << endl;
    }
}