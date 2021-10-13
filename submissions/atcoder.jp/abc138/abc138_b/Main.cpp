#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    long double sum = 0;

    rep(i,n){
        long double a;
        cin >> a;
        sum += 1.0 / a; 
    }

    cout << setprecision(15);
    cout << 1.0 / sum << endl;
}