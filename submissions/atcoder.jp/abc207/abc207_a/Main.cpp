#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(a+b, max(b+c, c+a)) << endl;
}