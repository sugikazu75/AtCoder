#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b;
    cin >> a >> b;

    if(a + b == 15) cout << '+' << endl;
    else if(a * b == 15) cout << '*' << endl;
    else cout << 'x' << endl;
}