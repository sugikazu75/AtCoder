#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    string s,t;
    cin >> s;
    cin >> t;

    int ans = 0;

    for(int i=0; i<=s.size()-t.size(); i++){
        int cnti = 0;
        for(int j=i; j<=i + t.size() - 1 ; j++){
            if(s[j] == t[j-i]){
                cnti++;
            }
        }
        if(cnti > ans) ans = cnti;
    }

    cout << t.size() - ans << endl;
}