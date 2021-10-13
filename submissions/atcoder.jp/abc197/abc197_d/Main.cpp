#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    long double n;
    cin >> n;
    long double x0, y0 , xn , yn;
    cin >> x0 >> y0 >> xn >> yn;
    long double cx = (x0 + xn) / 2.0;
    long double cy = (y0 + yn) / 2.0;
    x0 -= cx;
    y0 -= cy;
    long double PI = acos(-1);
    long double x1 = x0 * cos(2.0 * PI / n) - y0 * sin(2.0 * PI / n) + cx;
    long double y1 = x0 * sin(2.0 * PI / n) + y0 * cos(2.0 * PI / n) + cy;

    cout << setprecision(15);
    cout << x1 << " " << y1 << endl;

    

} 
