#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    int n;
    cin >> n;

    vector <int> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];

    vector <int> num(n);
    iota(all(num),0);

    double total=0.0;

    do{
        double tot=0.0;
        for(int i=0; i<n-1; i++){
            double dx = x[num[i+1]] - x[num[i]];
            double dy = y[num[i+1]] - y[num[i]];
            double l2 = pow(dx,2) + pow(dy,2);
            double l = pow(l2,0.5);
            tot += l;
        }
        total += tot;
    }while(next_permutation(all(num)));

    double ans = total;
    for(int i=n; i>=1; i--){
        ans /= i;
    }

    cout << fixed << setprecision(10);
    cout << ans << endl;
}
