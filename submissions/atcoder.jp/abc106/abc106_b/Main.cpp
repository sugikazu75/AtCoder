#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(i % 2 == 0) continue;
        int cnt = 0;
        for(int j=1; j*j<=i; j++){
            if(i % j == 0){
                if(j * j == i) cnt++;
                else cnt += 2;
            }
        }
        if(cnt == 8) ans++;
    }
    cout << ans << endl;
}