#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int k;
    string s;
    cin >> k >> s;

    if(s.size() <= k) cout << s << endl;
    else{
        rep(i,k){
            cout << s[i];
        }
        cout << "..." << endl;
    }
}
