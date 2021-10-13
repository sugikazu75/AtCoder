#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long double a,b,h,m;
    cin >> a >> b >> h >> m;
    long double PI = M_PI;

    long double hrad = 30.0000*h + 0.50000*m;
    long double mrad = 6.0000*m;

    long double angle = max(hrad,mrad) - min(hrad,mrad);

    while(angle > 360.0000){
        angle -= 360.0000;
    }

    if(angle == 360.0000){
        cout << fixed << abs(a-b) <<setprecision(30) << endl;
        return 0;
    }

    while(angle > 180.0000){
        angle = 360.0000 - angle;
    }

    angle = angle * PI / 180.0000;
    long double c = cos(angle);
    long double c2 = a*a + b*b - 2 * a * b * c;
    long double ans = pow(c2,0.5000000);

    cout << fixed << setprecision(30);
    cout << ans << endl;

}
