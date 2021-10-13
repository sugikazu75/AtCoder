#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int ans=0;
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-1-i]) ans++;
    }    

    cout << ans << endl;
    
}