#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    ll cnt = 0;
    while(cnt * (cnt + 1) / 2 < n){
        cnt++;
    }

    for(int i = 1; i<=cnt; i++){
        if(i == cnt * (cnt + 1 ) / 2 - n) continue;
        else cout << i << endl;

    }
}