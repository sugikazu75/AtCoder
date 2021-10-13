#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    if(1 <= n && n <= 125) cout << 4 << endl;
    else if(126 <= n && n <= 211) cout << 6 << endl;
    else cout << 8 << endl;
}