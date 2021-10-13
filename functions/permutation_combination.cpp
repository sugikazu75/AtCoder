#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

//計算量O(k)
// nPk
long long permutation(int n, int k){
    long long perm = 1;
    for(int i = 0; i < k; i++){
        perm *= (n - i);
    }

    return perm;
}

//計算量O(min(k,n-k))
// nCk
long long combination(int n, int k){
    long long cns = min(k,n-k);
    long long com = permutation(n,cns);
    for(int i = 0; i < cns; i++){
        com /= (cns - i);
    }

    return com;
} 

//nCr(mod M)
ll M = 1000000007;


