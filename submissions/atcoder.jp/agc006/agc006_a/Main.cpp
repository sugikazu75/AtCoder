#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    int ans = 2 * n;
    for(int i=0; i<n; i++){//重なり合うスタート
        bool ok = true;
        for(int j=i; j<n; j++){
            if(s[j] != t[j - i]){
                ok = false;
            }
        }
        if(ok) ans = min(ans, n + i);
    }

    cout  << ans << endl;

}