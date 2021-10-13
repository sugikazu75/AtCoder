#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;


int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    const ll mod = 1000000007;
    vector <ll> dp1(n,0),dp2(n,0),dp3(n,0),dp4(n,0),dp5(n,0),dp6(n,0),dp7(n,0);
    if(s[0] == 'a') dp1[0] = 1;
    for(ll i=1; i<n; i++){
        char now = s[i];
        if(now == 'a'){
            dp1[i] = (dp1[i] + 1) % mod;
        }
        else if(now == 't'){
            dp2[i] = (dp2[i] + dp1[i-1]) % mod;
        }
        else if(now == 'c'){
            dp3[i] = (dp3[i] + dp2[i-1]) % mod;
        }
        else if(now == 'o'){
            dp4[i] = (dp4[i] + dp3[i-1]) % mod;
        }
        else if(now == 'd'){
            dp5[i] = (dp5[i] + dp4[i-1]) % mod;
        }
        else if(now == 'e'){
            dp6[i] = (dp6[i] + dp5[i-1]) % mod;
        }
        else if(now == 'r'){
            dp7[i] = (dp7[i] + dp6[i-1]) % mod;
        }
        else;
        dp1[i] += dp1[i-1] % mod;
        dp2[i] += dp2[i-1] % mod;
        dp3[i] += dp3[i-1] % mod;
        dp4[i] += dp4[i-1] % mod;
        dp5[i] += dp5[i-1] % mod;
        dp6[i] += dp6[i-1] % mod;
        dp7[i] += dp7[i-1] % mod;
    }

    cout << dp7[n-1] % mod << endl;
}
