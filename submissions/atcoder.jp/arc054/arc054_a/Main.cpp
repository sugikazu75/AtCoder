#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
    
int main(){
    long double l,x,y,s,d;
    cin >> l >> x >> y >> s >> d;

    if(s <= d){
        if(x >= y){
            cout << setprecision(10);
            cout << (d-s)/(x+y) << endl;
            return 0;
        }
        else{
            long double rev = (l - (d-s))/(y-x);
            long double nor = (d-s)/(x+y);
            cout << setprecision(10);
            cout << min(rev,nor) << endl;
        }
    }

    else{
        if(x >= y){
            cout << setprecision(10);
            cout << (d + (l - s)) / (x + y) << endl;;
            return 0;
        }

        else{
            long double rev = (s-d)/(y-x);
            long double nor = (d + (l - s)) / (x + y);
            cout << min(rev,nor) << endl;
            return 0;
        }
    }
}
