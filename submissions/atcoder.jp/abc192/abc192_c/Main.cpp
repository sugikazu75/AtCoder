#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

long long g1(long long k){
    string x = to_string(k);
    vector <long long> factor(x.size());
    for(int i=0; i<x.size(); i++){
        ll tmp = x[i] - '0';
        factor[i] = tmp;
    }
    sort(all(factor));
    reverse(all(factor));
    ll ans = 0;
    rep(i,x.size()){
        ans *= 10;
        ans += factor[i];
    }
    return ans;
}

long long g2(long long k){
    string x = to_string(k);
    vector <long long> factor(x.size());
    for(int i=0; i<x.size(); i++){
        ll tmp = x[i] - '0';
        factor[i] = tmp;
    }
    sort(all(factor));
    ll ans = 0;
    rep(i,x.size()){
        if(factor[i] != 0){
            ans *= 10;
            ans += factor[i];
        }
    }
    return ans;
}

long long f(long long k){
    return g1(k) - g2(k);
}

int main(){
    ll n,k;
    cin >> n >> k;
    
    ll ans = n;
    rep(i,k){
        ans = f(ans);
    }

    cout << ans << endl;   

}