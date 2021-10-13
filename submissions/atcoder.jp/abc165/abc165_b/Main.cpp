#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    unsigned long x;
    cin >> x;

    unsigned long now = 100;
    ll cnt = 0;
    while(now < x){
        unsigned long tmp = now / 100;
        now = now + tmp;
        cnt++;
    }

    cout << cnt << endl;
}