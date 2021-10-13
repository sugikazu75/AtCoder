#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n, k;
    cin >> n >> k;
    vector <double> face(n);
    rep(i,n) cin >> face[i];

    vector <double> p(n);
    rep(i,n) p[i] = (face[i] + 1)/2.0;

    vector <double> sum(n-k+1, 0.0);

    double tmp;
    rep(i,k) tmp += p[i];

    for(int i=0; i<n-k+1; i++){
        sum[i] = tmp;
        tmp = tmp - p[i] + p[i + k];
    }

    sort(all(sum));

    cout << fixed << setprecision(10);
    cout << sum[n-k] << endl;
}
