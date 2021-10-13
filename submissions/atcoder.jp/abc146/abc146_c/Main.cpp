#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

long long order(long long n){
    long long keta = 0;
    while(n > 0){
        n /= 10;
        keta ++;
    }
    return keta;
}

int main(){
    long long a,b,x;
    cin >> a >> b >> x;

    long long ok = 0;
    long long ng = 1000000001;

    while(abs(ok-ng) > 1){
        long long mid = (ok + ng) / 2;
        long long tmp = a * mid + b * order(mid);
        if(tmp <= x){
            ok = mid;
        }
        else{
            ng = mid;
        }
    }

    cout << ok << endl;
}