#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    double sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;

    cout << setprecision(15);
    cout << (gx*sy + sx*gy) / (sy+gy)<< endl;
}