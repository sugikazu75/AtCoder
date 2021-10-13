#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n ;

    long double man = 0;
    long double yu = 0;
    long double ch = 0;

    rep(i,n){
        long double a;
        cin >> a;
        man += abs(a);
        yu += a * a;
        ch = max(ch, abs(a));
    }

    cout << setprecision(16);
    cout << man << endl;
    cout << pow(yu, 0.5) << endl;
    cout << ch << endl;
}