#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;



double f(double x){             //被積分関数
    return x*x*x * 4.8;
}

int main(){
    double mi, ma;
    double div;

    cin >> mi >> ma >> div;     //積分区間の下端,上端,分割数

    double d = (ma - mi) / div;
    double xb = mi;
    double xe = mi + d;

    long double ans = 0;
    for(int i=0; i<div; i++){
        ans += ( f(xb) + f(xe) ) * d / 2.0;
        xb +=  d;
        xe +=  d;
    }

    cout << ans << endl;
}