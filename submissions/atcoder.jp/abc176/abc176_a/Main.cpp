#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n,x,t;
    cin >> n >> x >> t;
    if(n%x == 0) cout << (n/x) * t << endl;
    else cout << (n/x + 1)*t << endl;
}