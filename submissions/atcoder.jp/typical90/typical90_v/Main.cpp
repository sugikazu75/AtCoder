#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;


int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll tmp = __gcd(a,__gcd(b,c));
    cout << a/tmp + b/tmp + c/tmp -3 << endl;
}
