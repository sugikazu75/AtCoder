#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cntr=0;
    vector<char> col(n);
    rep(i,n){
        col[i] = s[i];
        if(col[i]=='R'){
            cntr++;
        }
    }
    int cntw=n-cntr;
    
    int tmp=0;
    for(int i=0; i<cntr; i++){
        if(col[i]=='W'){
            tmp++;
        }
    }

    cout << min(cntw, tmp) << endl;
}
