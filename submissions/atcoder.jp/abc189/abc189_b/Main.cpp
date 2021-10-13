#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    long double x;
    cin >> n >> x;
    long double sum = 0.0;
    rep(i,n){
        double v,p;
        cin >> v >> p;
        sum += v * p;
        if(sum > 100 * x){
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}