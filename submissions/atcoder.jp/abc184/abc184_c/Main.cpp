#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll r1,c1;
    ll r2,c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    if(r1 == r2 && c1 == c2){
        cout << 0 << endl;
        return 0;
    }

    ll tmpr = r1 - r2;
    ll tmpc = c1 - c2;

    if(abs(tmpr) == abs(tmpc)){
        cout << 1 << endl;
        return 0;
    }

    if(abs(tmpr) + abs(tmpc) <= 3){
        cout << 1 << endl;
        return 0;
    }

    if(abs(tmpr) % 2 == abs(tmpc) % 2){
        cout << 2 << endl;
        return 0;
    }

    else{
        if(max(abs(tmpr), abs(tmpc)) - min(abs(tmpr), abs(tmpc)) <= 3){
            cout << 2 << endl;
        }
        else cout << 3 << endl;
    }

    

}