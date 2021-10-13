#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    vector <char> ans(0);
    for(int i=0; i<s.size(); i++){
        if(s[i] == '.') break;
        else{
            ans.push_back(s[i]);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i];
    }
    cout << endl;
} 
