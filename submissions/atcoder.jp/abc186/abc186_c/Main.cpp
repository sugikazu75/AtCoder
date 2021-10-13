#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    int  ans = 0;

    for(int i=1; i<=n; i++){
        bool ok = true;
        int tmp10 = i;
        int tmp8 = i;
        while(tmp10 > 0){
            if(tmp10  % 10 == 7){
                ok = false;
            }
            tmp10 /= 10;
        }
        while(tmp8 > 0){
            if(tmp8 % 8 == 7){
                ok = false;
            }
            tmp8 /= 8;
        }
        if(ok) ans++;
    }

    cout << ans << endl;
}