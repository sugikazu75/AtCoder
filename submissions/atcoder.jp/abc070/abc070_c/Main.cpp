#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

long gcd(long a, long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}


long lcm(long a, long b){
    return a / gcd(a,b) * b;    //オーバーフロー防止
}


int main(){
    int n;
    cin >> n;

    vector <long> t(n);
    rep(i,n) cin >> t[i];

    if(n==1) {
        cout << t[0] << endl;
        return 0;
    }

    long tmp = t[0];

    for(int i=0; i<n; i++){
        tmp = lcm(tmp, t[i]);
    }

    cout << tmp << endl;

}
