#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    string S;
    cin >> S;
    int ca,cb,cc;
    ca = count(all(S),'a');
    cb = count(all(S),'b');
    cc = count(all(S),'c');

    bool ok=true;

    if(abs(ca-cb)>1) ok = false;
    if(abs(cb-cc)>1) ok = false;
    if(abs(cc-ca)>1) ok = false; 

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;

} 
