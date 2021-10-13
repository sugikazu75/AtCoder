#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    for(int i = 1; i * c <= b; i++){
        if(i * c >= a){
            cout << i * c << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}