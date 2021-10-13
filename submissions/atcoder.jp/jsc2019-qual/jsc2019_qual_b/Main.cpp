#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    vector <ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    ll mod = 1000000007;

    vector <ll> outermin(n,0), outermax(n,0);

    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(a[j] > a[i]) outermax[i]++;
            if(a[j] < a[i]) outermin[i]++;//他の部分と作るぺあ
        }
        //cout << outermax[i] << " " << outermin[i] << endl; 
    }
        //cout << endl;

    ll inner = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(j > i && a[j]<a[i]) inner++;//a[i]の転倒数
        }
        //cout << left[i] << " "  << right[i] << endl;
    }

    ll M = 0, R = 0;
    ll ans = 0;
    ll tmp = ((k*(k-1)) / 2) % mod;
    
    rep(i,n){
        M += outermin[i];
    }

    ans += M * tmp;
    ans %= mod;
    ll tmp1 = k * inner;
    tmp1 %= mod;
    ans += tmp1;
    ans %= mod;
    cout << ans << endl;

}

