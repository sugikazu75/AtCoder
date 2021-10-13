#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b;
    cin >> a >> b;
    int sa = a / 100 + (a - (a/100) * 100) / 10 + a%10;
    int sb = b / 100 + (b - (b/100) * 100) / 10 + b%10;
    cout << max(sa,sb) << endl;
}
