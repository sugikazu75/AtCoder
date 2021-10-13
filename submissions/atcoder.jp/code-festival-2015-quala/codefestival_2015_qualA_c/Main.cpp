#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long long n,t;
    cin >> n >> t;

    vector <long long> rev(n);

    long long sum = 0;
    long long ans = n;

    rep(i,n){
        long long a,b;
        cin >> a >> b;
        rev[i] = a - b;
        sum += b;
    }

    if(sum > t){
        cout << -1 << endl;
        return 0;
    }

    sort(all(rev));

    while(sum <= t && ans>0){
        sum += rev[n - ans];
        if(sum <= t){
            ans --;
        }
    }

    cout << ans << endl;


}