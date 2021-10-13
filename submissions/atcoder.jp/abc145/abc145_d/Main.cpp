#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

//nCr(mod MOD) O(MAX)が間に合う場合
const int MAX = 1000100;//nの最大値
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

int main(){
    int x,y;
    cin >> x >> y;

    ll P = 1000000007;

    if((x + y) % 3 != 0){
        cout << 0 << endl;
    }
    else{
        ll a = (2 * y - x) / 3;
        ll b = (2 * x - y) / 3;

        COMinit();
        cout << COM(a+b, a) << endl;
        
    }

}