#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long long a;
    long double b;
    cin >> a >> b;

    int sei=b;
    long double shou=b-sei;

    long double seki = shou * a;

    long long ans = sei*a + seki;

    cout << ans << endl;
}