#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    double n,k;
    cin >> n >> k;

    double ans=0;

    for(int i=1; i<=n; i++){
        int tmp=i;
        double counti = 1.0/n;

        while(tmp < k){
            tmp *= 2;
            counti /= 2;
        }

        ans += counti;

    }

    cout << fixed << setprecision(15);
    cout << ans << endl;
}
