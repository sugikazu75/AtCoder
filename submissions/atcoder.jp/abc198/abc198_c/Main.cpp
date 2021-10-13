#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    long double r,x,y;
    cin >> r >> x >> y;
    
    long double d = sqrtl(x * x + y * y);

    if(d == r) cout << 1 << endl;
    else if(d < r) cout << 2 << endl;
    else cout << ceil(d / r) << endl;


}