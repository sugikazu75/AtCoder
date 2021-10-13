#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll i;
    ll cnt=0;
    for(i=1; i*(i+1)/2<=n+1; i++){
        cnt++;
    }

    //n+1の長さのマルタで作れる本数の最大
    //cout << i-1 << endl;
    cout << n - (i-1) + 1 << endl;
}