#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

//nCr(mod MOD) O(n)が間に合わないが,O(min(r,n-r))が間に合う場合.
long long MOD = 1000000007;   //modを取らない場合MOD=1とすれば良い
long long loop_pow_mod(long long x, long long n){
    if(n==0) return 1;
    if(n % 2 == 0){
        long long tmp = loop_pow_mod(x, n/2);
        return (tmp * tmp) % MOD;
    }
    else return (x * loop_pow_mod(x, n-1))  % MOD;
}

long long COMB(long long n, long long r){
    long long facn = 1;
    long long facr = 1;
    r = min(r, n-r);
    for(long long i = 1; i<=r; i++){
        facn = facn * (n-(i-1)) % MOD;
        facr = facr * i % MOD;
    }
    return facn * loop_pow_mod(facr, MOD-2) % MOD;
}


int main(){
    ll n,a,b;
    cin >> n >> a >> b;

    cout << ((loop_pow_mod(2,n)-1 - COMB(n,a) + MOD) % MOD - COMB(n,b) + MOD) % MOD << endl;
}