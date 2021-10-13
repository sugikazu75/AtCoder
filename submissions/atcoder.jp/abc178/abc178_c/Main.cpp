#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;
    long long mod = 1000000007;

    long long num10 = 1;
    long long num9 = 1;
    long long num8 = 1;
    long long cnt10 = 0;
    long long cnt9 = 0;
    long long cnt8 = 0;

    rep(i,n){
        num10 *= 10;
        num9 *= 9;
        num8 *= 8;
        if(num10 >= mod){
            num10 %= mod;
            cnt10 ++;
        }
        if(num9 >= mod){
            num9 %= mod;
            cnt9 ++;
        }
        if(num8 >= mod){
            num8 %= mod;
            cnt8 ++;
        }
    }

    long long ans = num10 % mod;
    ans -= num9;
    ans += mod;
    ans %= mod;
    ans -= num9;
    ans += mod;
    ans %= mod;
    ans += num8;
    ans %= mod;

    cout << ans << endl;

}