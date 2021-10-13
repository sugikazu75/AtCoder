#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;


ll ans[2001];
ll mod = 1000000007;

int main(){
    int s;
    cin >> s;

    ans[0] = 0;
    ans[1] = 0;
    ans[2] = 0;
    ans[3] = 1;
    ans[4] = 1;
    ans[5] = 1;

    long long tmp = 1;

    for(int i=6; i<=2000; i++){
        ans[i] = 1 + tmp;
        ans[i] %= mod;
        tmp += ans[i-2];
        tmp %= mod;
    }    

    cout << ans[s] << endl;
}