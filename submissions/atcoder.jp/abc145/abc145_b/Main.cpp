#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ok = true;
    if(n % 2 != 0){
        cout << "No" << endl;
        return 0;
    }
    else{
        for(int i=0; i<n/2; i++){
            if(s[i] != s[i + n/2]) ok  = false;
        }
    }

    if(ok) cout << "Yes" <<  endl;
    else cout << "No" << endl;

}