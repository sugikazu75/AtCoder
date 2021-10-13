#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;

    long double ans = 0.0;
    vector <long double> x(n),y(n);
    rep(i,n){
        long double X,Y;
        cin >> X >> Y;
        x[i] = X;
        y[i] = Y;
    }

    rep(i,n){
        rep(j,n){
            ans = max(abs(x[i]-x[j])*abs(x[i]-x[j]) + abs(y[i]-y[j])*abs(y[i]-y[j]) , ans);
        }
    }

    cout << setprecision(10);
    cout << sqrt(ans)  << endl;
}