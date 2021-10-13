#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b){
        cout << c << endl;
        return 0;
    }
    if(b == c){
        cout << a << endl;
        return 0;
    }
    if(c == a){
        cout << b << endl;
        return 0;
    }
    cout << 0 << endl;
}

