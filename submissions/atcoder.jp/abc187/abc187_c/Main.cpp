#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <string> s(n);
    rep(i,n) cin >> s[i];

    map <string, int> table1, table2;//!有りが存在table1[key] = 1, !無しが存在table2[key] = 1
    rep(i,n){
        if(s[i][0] == '!'){
            table1[s[i].substr(1)] = 1;
        }
        else{
            table2[s[i]] = 1;
        }
    }

    rep(i,n){
        if(s[i][0] == '!'){
            if(table2.count(s[i].substr(1))){
                cout << s[i].substr(1) << endl;
                return 0;
            }
        }
        else{
            if(table1.count(s[i])){
                cout  << s[i] << endl;
                return 0;
            }
        }
    }
    cout << "satisfiable" << endl;
}