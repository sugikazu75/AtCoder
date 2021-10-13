#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << max(a*c, max(a*d , max(b*c, b*d))) << endl;;
}