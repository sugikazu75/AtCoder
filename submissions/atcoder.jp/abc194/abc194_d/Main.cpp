#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <long double> a(n+1,0.0);

    for(int i=n-1; i>=1; i--){
        a[i] = a[i+1] + (long double) n / (long double) i;
    }
    cout << setprecision(10);
    cout << a[1] << endl;
}