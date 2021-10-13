#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ll n, p, q;
    cin >> n >> p >> q;
    vector <ll> a(n);
    rep(i,n) cin >> a[i];

    ll ans1 = 0;
    for(int i=0; i<n-4; i++){
        for(int j=i+1; j<n-3; j++){
            for(int k=j+1; k<n-2; k++){
                for(int l=k+1; l<n-1; l++){
                    for(int m=l+1; m<n; m++){
                        ll ans = 1;
                        ans = (ans * a[i]) % p;
                        ans = (ans * a[j]) % p;
                        ans = (ans * a[k]) % p;
                        ans = (ans * a[l]) % p;
                        ans = (ans * a[m]) % p;
                        if(ans == q){
                            ans1++;
                        }
                    }
                }
            }
        }
    }
    cout << ans1 << endl;


}

