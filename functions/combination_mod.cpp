#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

//nCr(mod MOD) O(MAX)が間に合う場合
const int MAX = 10000010;//nの最大値
const int MOD = 1000000007;//mod
long long fac[MAX]; //fac = 階上のmodを取ったもの
long long finv[MAX];//inv = iの逆元
long long inv[MAX]; //finv= fac[i]の逆元
// テーブルを作る前処理.計算量O(MAX)
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

/*int main() {
    // 前処理
    COMinit();
    // 計算例
    cout << COM(100000, 50000) << endl;
}*/


//nCr(mod MOD) O(n)が間に合わないが,O(min(r,n-r))が間に合う場合.
long long MOD = 1000000007;   //modを取らない場合MOD=INFとすれば良い
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
        facr = facr *  i % MOD;
    }
    return facn * loop_pow_mod(facr, MOD-2) % MOD;
}

