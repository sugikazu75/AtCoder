#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int x;
    cin >> x;

    if(x % 100 == 0) cout << 100 << endl;
    else cout << (110000 - x) % 100 << endl;
}