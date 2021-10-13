#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    map <string , int> table;
    table["resare"] = 1;
    table["esare"] = 1;
    table["remaerd"] = 1;
    table["maerd"] = 1;

    reverse(all(s));
    string tmp="";
    for(int i=0; i<s.size(); i++){
        auto tmp2 = s[i];
        tmp = tmp + tmp2;
        if(table.count(tmp)){
            tmp = "";
        }
    }
    if(tmp == ""){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
} 
