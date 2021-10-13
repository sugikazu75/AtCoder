#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector <ll> m(1000010);//0,1,1+2,1+2+3,...
    ll cur = 0;
    for (int i=0; i<1000010; i++){
        m[i] = cur;
        cur += i+1;
    }

    ll ans = 0;

    rep(i,n){
        int a,b;
        cin >> a >> b;
        ans += m[b] - m[a - 1];
    }

    cout << ans << endl;


}					