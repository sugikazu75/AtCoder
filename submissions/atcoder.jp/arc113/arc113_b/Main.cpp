#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    a = a % 10;

    ll mod;
    
    if(b % 4 == 0) mod = 0;
    else if(b % 4 == 1) mod = 1;
    else if(b % 4 == 2){
        if(c % 2 == 0) mod = 0;
        else if(c == 1) mod = 2;
        else mod  = 0;
    }
    else{
        if(c % 2 == 0) mod = 1;
        else mod = 3;
    }

    if(mod == 0) cout << (a * a * a * a) % 10 << endl;
    else if(mod == 1) cout << a % 10 << endl;
    else if(mod == 2) cout << (a * a) % 10 << endl;
    else cout << (a * a * a) % 10 << endl;
    
}