#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    long double sum = 0.0;
    vector <long double> a(n), b(n);
    rep(i, n){
        cin >> a[i] >> b[i];
        sum += a[i] / b[i];
    }

    long double t = sum / 2.0;
    long double now = 0.0;
    long double ans = 0.0;
    for(int i=0; i<n; i++){
        if(now + a[i]/b[i] < t){
            now += a[i]/b[i];
            ans += a[i];
        }
        else{
            cout << setprecision(15);
            cout << ans + (t - now) * b[i] << endl;
            return 0;
        }
    }
}