#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    long long k;
    cin >> k;
    long long cur = 7;
    int cnt = 1;
    int ans = -1;
    bool ok = false;
    rep(i,k+3){
        cur = cur % k;
        if(cur == 0){
            ok = true;
            ans = cnt;
            break;
        }
        cur = cur * 10 + 7;
        cnt ++;
    }
    cout << ans << endl;
}
