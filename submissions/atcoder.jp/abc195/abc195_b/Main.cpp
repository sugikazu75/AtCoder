#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b,w;
    cin >> a >> b >> w;
    w *= 1000;

    if(w % a != 0 && w % b != 0){
        int tmpa = w / a;
        int tmpb = w / b;
        if(tmpa == tmpb){
            int sa = b - a;
            if(w - tmpa * a > sa * tmpa){
                cout << "UNSATISFIABLE" << endl;
                return 0;
            }
        }
    }
    int m,M;
    M = w / a;
    if(w % b == 0){
        m = w / b;
    }
    else{
        m = w / b + 1;
    }
    cout << m << " " << M << endl;
} 
