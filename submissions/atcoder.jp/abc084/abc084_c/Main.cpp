#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> c(n-1), s(n-1) , f(n-1);
    rep(i,n-1){
        cin >> c[i] >> s[i] >> f[i];
    }
    rep(i,n){
        ll nowtime = 0;
        for(int j=i; j<n-1; j++){
            if(nowtime <= s[j]){
                nowtime = s[j];
            }
            else{
                nowtime = ((nowtime + f[j] - 1) / f[j]) * f[j];
            }
            nowtime += c[j];
        }
        cout << nowtime << endl;
    }
}