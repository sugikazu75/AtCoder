#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    long double PI = acos(-1);
    long double t, l, x, y;
    cin >> t;
    cin >> l >> x >> y;
    int q;
    cin >> q;
    rep(i,q){
        long double e;
        cin >> e;
        long double rate = e / t;
        long double nowx = 0;
        long double nowy = -l / 2.0 * sin(2.0 * PI * rate);
        long double nowz = -l / 2.0 * cos(2.0 * PI * rate) + l / 2.0;
        long double hori = sqrt((x-nowx)*(x-nowx) + (y-nowy) * (y-nowy));
        long double temp = sqrt((x-nowx)*(x-nowx) + (y-nowy) * (y-nowy) + nowz * nowz);

    cout << setprecision(15);
        cout << acos(hori / temp) / PI * 180.0 << endl;
    }

} 
