#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector <ll> h(n);
    rep(i,n) cin >> h[i];

    for(int i=n-1; i>0; i--){
        if(h[i-1] > h[i]){
            h[i-1]--;
        }
        if(h[i-1] > h[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}