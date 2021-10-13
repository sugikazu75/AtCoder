#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n, a, x, y;
    cin >> n >> a >> x >> y;

    if(n > a) cout << a * x + (n - a) * y << endl;
    else cout << n * x << endl;

}