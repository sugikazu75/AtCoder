#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

long long MOD = 1000000007;   //modを取らない場合MOD=INFとすれば良い
long long loop_pow_mod(long long x, long long n){
    if(n==0) return 1;
    if(n % 2 == 0){
        long long tmp = loop_pow_mod(x, n/2);
        return (tmp * tmp) % MOD;
    }
    else return (x * loop_pow_mod(x, n-1))  % MOD;
}

int main(){
    cout <<  loop_pow_mod(4,1) << endl;
}