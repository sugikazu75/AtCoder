#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n,k;
    cin >> n>> k;
    ll nowmax = k-1;
    ll cnt = 1;
    while(nowmax < n){
        nowmax = nowmax * k + k-1;
        cnt++;
    }

    cout << cnt << endl;
}