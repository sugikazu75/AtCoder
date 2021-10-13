#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string pre = "abcdefghijklmnopqrstuvwxyz";
    string neo;  
    cin >> neo;
    map <char, char> pre_neo;
    map <char, char> neo_pre;
    rep(i, 26){
        pre_neo[pre[i]] = neo[i];
        neo_pre[neo[i]] = pre[i];
    }

    vector <string> ans(0);
    int n;
    cin >> n;
    rep(i, n){
        string s;
        cin >> s;
        rep(j, s.size()){
            s[j] = neo_pre.at(s[j]);
        }
        ans.push_back(s);
    }
    sort(all(ans));

    rep(i,n){
        rep(j, ans[i].size()){
            ans[i][j] = pre_neo.at(ans[i][j]);
        }
    }


    rep(i, n){
        cout << ans[i] << endl;
    } 

}