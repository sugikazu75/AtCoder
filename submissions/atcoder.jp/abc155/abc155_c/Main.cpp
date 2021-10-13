#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    map <string, int> s;
    vector <string> ans;
    int l = 0;

    rep(i,n){
        string tmp;
        cin >> tmp;
        if(!s.count(tmp)){
            s[tmp] = 1;
            ans.push_back(tmp);
            if(s.at(tmp) >= l){
                l = s.at(tmp);
            }
        }
        else{
            s.at(tmp)++;
            if(s.at(tmp) >= l){
                l = s.at(tmp);
            }
        }
    }

    sort(all(ans));
    for(string x:ans){
        if(s.at(x) == l){
            cout << x << endl;
        }
    }
}
