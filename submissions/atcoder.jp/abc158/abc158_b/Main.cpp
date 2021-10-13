#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, a, b;
    cin >> n >> a >> b;

    ll roop = n/(a+b);
    ll rev = n - roop*(a+b);
    if(rev >= a) cout << a * roop + a << endl;
    else cout << a * roop + rev << endl;

}