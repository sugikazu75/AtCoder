#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    
    ll blue = a;
    ll red = 0;
    ll cnt = 0;
    for(int i=0; i<100100; i++){
        if(blue <= red * d){
            cout << cnt << endl;
            return 0;
        }
        blue += b;
        red += c;
        cnt++;
    }

    cout << -1 << endl;

}