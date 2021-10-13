#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    long long x,k,d;
    cin >> x >> k >> d;

    x = abs(x);
    
    long long kai = x/d;

    if(kai > k){
        cout << x - k * d << endl;
    }

    else{
        long long amari = (k-kai)%2;
        if(amari == 0){
            cout << abs(x - kai*d) << endl;
        }
        else{
            cout << abs(x - kai*d - d) << endl;
        }
    }
}
