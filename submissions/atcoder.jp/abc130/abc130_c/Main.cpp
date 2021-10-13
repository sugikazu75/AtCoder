#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    double w,h;
    int x,y;
    cin >> w >> h;
    cin >> x >> y;

    double ans1 = (w*h)/2;

    if((x == w/2) && (y == h/2)){
        cout << fixed << ans1 << setprecision(10) << " " << "1" << endl;
    }
    else{
        cout << fixed << ans1 << setprecision(10) << " " << "0" << endl;
    }
}   
