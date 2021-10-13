#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector <ll> left(n), right(n) ,t(n);
    rep(i,n){
        ll tmp,l,r;
        cin >> tmp >> l >> r;
        left[i] = l;
        right[i] = r;
        t[i] = tmp;
    }

    ll ans = 0;

    for(ll i=0; i<n-1; i++){
        for(ll j=i+1; j<n; j++){
            ll tmp = 0;
            if(right[i] - left[i] >= right[j] - left[j]) tmp = 0;
            else tmp = 1;

        
            if(tmp == 0){
                if(right[i] == left[j] && (t[i] == 1 || t[i] == 3) && (t[j] == 1 || t[j] == 2)) ans++;
                else if(left[i] < left[j] && left[j] < right[i]) ans++;
                else if(left[i] < right[j] && right[j] < right[i]) ans++;
                else if(left[i] == right[j] && (t[i] == 1 || t[i] == 2) && (t[j] == 1 || t[j] == 3)) ans++;
                else if(left[i] == left[j] || right[i] == right[j]) ans++;
            }

            else if(tmp == 1){
                if(right[j] == left[i] && (t[j] == 1 || t[j] == 3) && (t[i] == 1 || t[i] == 2)) ans++;
                else if(left[j] < left[i] && left[i] < right[j]) ans++;
                else if(left[j] < right[i] && right[i] < right[j]) ans++;
                else if(left[j] == right[i] && (t[j] == 1 || t[j] == 2) && (t[i] == 1 || t[i] == 3)) ans++;
                else if(left[i] == left[j] || right[i] == right[j]) ans++;
            }
        }
    }
    cout << ans << endl;
}