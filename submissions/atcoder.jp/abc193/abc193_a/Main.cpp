#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    long double a,b;
    cin >> a >> b;
    long double ans = 100.0 - 100.0 * (b/a);
    cout << setprecision(15);
    cout << ans << endl;
}