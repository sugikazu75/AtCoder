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

    int ans = 0;

    for(int i=0; i<n-2; i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') ans ++;
    }

    cout << ans << endl;
    
}