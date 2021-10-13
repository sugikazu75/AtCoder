#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    string s;
    cin >> s;

    int ans = 0;

    for(int i=0; i<s.size(); i++){
        char num = s[i];
        int tmp = num - '0';
        ans += tmp * pow(-1,i%2);
    }

    cout << ans << endl;

}
